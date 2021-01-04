#include<stdio.h>

int main()
{
	float price, gst_rate, e_gst_rate, gst;
	
	printf("Enter item price: ");
	scanf("%f", &price);
	
	printf("Enter GST rate: ");
	scanf("%f", &gst_rate);
	
	e_gst_rate = (gst_rate * 100)/(gst_rate + 100);
	
	gst = price * e_gst_rate / 100;
	
	printf("The GST on item is %1.2f.\n", gst);
	
	return 0;
}
