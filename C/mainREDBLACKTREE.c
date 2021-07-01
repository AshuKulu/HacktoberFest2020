#include <stdio.h>
#include <stdlib.h>
#define RED 0
#define BLACK 1
struct rbnode
{
	int value;
	int color;
	struct rbnode*left,*right,*parent;
};
void flipcolor(struct rbnode*node)
{
	(node->color)=1-(node->color);
}
struct rbnode*singleleftrotate(struct rbnode*gp)
{
	struct rbnode*p=gp->right;
	gp->right=p->left;
	if(p->left!=NULL)
	{
		p->left->parent=gp;
	}
	p->parent=gp->parent;
	p->left=gp;
	gp->parent=p;
	flipcolor(gp);
	flipcolor(p);
	return p;
}
struct rbnode*singlerightrotate(struct rbnode*gp)
{
	struct rbnode*p=gp->left;
	gp->left=p->right;
	if(p->right!=NULL)
	{
		p->right->parent=gp;
	}
	p->parent=gp->parent;
	p->right=gp;
	gp->parent=p;
	flipcolor(gp);
	flipcolor(p);
	return p;
}
struct rbnode*doubleleftrightrotate(struct rbnode*gp)
{
	struct rbnode*c,*p;
	p=gp->left;
	c=p->right;
	p->right=c->left;
	if(c->left!=NULL)
	{
		c->left->parent=p;
	}
	c->left=p;
	p->parent=c;
	gp->left=c;
	c->parent=gp;
	return singlerightrotate(gp);
}
struct rbnode*doublerightleftrotate(struct rbnode*gp)
{
	struct rbnode*c,*p;
	p=gp->right;
	c=p->left;
	p->left=c->right;
	if(c->right!=NULL)
	{
		c->right->parent=p;
	}
	c->right=p;
	p->parent=c;
	gp->right=c;
	c->parent=gp;
	return singleleftrotate(gp);
}
int isroot(struct rbnode*node)
{
	if(node->parent==NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int getcolor(struct rbnode*node)
{
	if(node==NULL)
	{
		return BLACK;
	}
	else
	{
		return node->color;
	}
}
struct rbnode*getuncle(struct rbnode*node)
{
	struct rbnode*p,*gp;
	p=node->parent;
	gp=p->parent;
	if(p==gp->left)
	{
		return gp->right;
	}
	else
	{
		return gp->left;
	}
}
struct rbnode*insert(struct rbnode*root,int v)
{
	struct rbnode*newnode,*x,*p,*gp,*uncle;
	newnode=(struct rbnode*)malloc(sizeof(struct rbnode));
	if(newnode==NULL)
	{
		printf("Malloc failed");
	}
	newnode->value=v;
	newnode->color=RED;
	newnode->left=NULL;
	newnode->right=NULL;
	if(root==NULL)
	{
		newnode->color=BLACK;
		newnode->parent=NULL;
		return newnode;
	}
	p=root;
	while(1)
	{
		if(v<p->value)
		{
			if(p->left==NULL)
			{
				p->left=newnode;
				newnode->parent=p;
				break;
			}
			p=p->left;
		}
		else
		{
			if(p->right==NULL)
			{
				p->right=newnode;
				newnode->parent=p;
				break;
			}
			p=p->right;
		}
	}
	x=newnode;
	while(1)
	{
		p=x->parent;
		if(p->color==BLACK)
			break;
		gp=p->parent;
		uncle=getuncle(newnode);
		if(getcolor(uncle)==RED)
		{
			p->color=BLACK;
			uncle->color=BLACK;
			gp->color=RED;
			if(isroot(gp)){root=gp;gp->color=BLACK;break;}
			x=gp;
			continue;
		}
		else
		{
			if(p==gp->left)
			{
				if(newnode==p->left)
				{
					if(isroot(gp)) root=singlerightrotate(gp);
					else if(gp==gp->parent->left) gp->parent->left=singlerightrotate(gp);
					else gp->parent->right=singlerightrotate(gp);
				}
				else
				{
					if(isroot(gp)) root=doubleleftrightrotate(gp);
					else if(gp==gp->parent->left) gp->parent->left=doubleleftrightrotate(gp);
					else gp->parent->right=doubleleftrightrotate(gp);
				}
			}
			else
			{
				if(newnode==p->right)
				{
					if(isroot(gp)) root=singleleftrotate(gp);
					else if(gp==gp->parent->left) gp->parent->left=singleleftrotate(gp);
					else gp->parent->right=singleleftrotate(gp);
				}
				else
				{
					if(isroot(gp)) root=doublerightleftrotate(gp);
					else if(gp==gp->parent->left) gp->parent->left=doublerightleftrotate(gp);
					else gp->parent->right=doublerightleftrotate(gp);
				}
			}
			break;
		}
	}
	return root;
}
void traverse(struct rbnode*root)
{
	if(root==NULL) return;
	traverse(root->left);
	printf("%d %s\n",root->value,(root->color)?"BLACK":"RED");
	traverse(root->right);
}
int main(int argc, char *argv[])
{
	struct rbnode*root=NULL;
	int value;
	printf("\nEnter node values = ");
	while(1)
	{
		scanf("%d",&value);
		if(value==-1) break;
		root=insert(root,value);
		traverse(root);
	}
	printf("\nDisplaying Tree : \n");
	traverse(root);
	return 0;
}
