function prime()
{
    var num=document.getElementById('check').value;
    var temp;
    document.getElementById('n-value').innerHTML = "You Entered \:" + num;
    for(var i=2;i<num;i++)
    {
        if(num%i==0)
        {
            temp=1;
            break;
        }
    }
if(temp == 1)
{
    document.getElementById('output-section1').innerHTML = num + " is not a prime number"
}
else
{

    document.getElementById('output-section1').innerHTML = num + " is a prime number"

}
}