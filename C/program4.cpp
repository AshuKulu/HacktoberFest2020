#include<stdio.h>

struct stores
{
	char name[20];
	float price;
	int quantity;
};
struct stores update(struct stores product,float p,int q);
float mul(struct stores stock);
main()
{
	float p_increament, value;
	int q_increament;
	struct stores item = {"XYZ",25.75,12};
	printf("\n input increament values:");
	printf("  price  increament and quantity increament\n");
	scanf("%f %d",&p_increament,&q_increament);
	
	item = update(item,p_increament,q_increament);
	printf("updated values\n\n");
	printf("Name  :%s\n",item.name);
	printf("Price  :%f\n",item.price);
	printf("Quantity  :%d\n",item.quantity);
	
	value = mul(item);
	printf("\nvalue = %f\n",value);
}

struct stores update(struct stores update,float p,int q)
{
	product.price += p;
	product.quantity += q;
	return(product);
}
float mul(struct stores stock)
{
	return(stock.price * stock.quantity);
}

