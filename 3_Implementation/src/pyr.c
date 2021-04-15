#include "proto.h"
void drawa()
{
    int H;
    printf("Enter Height of Pyramid:\n");
    scanf("%d",&H);
    if(H<=255)
				{
					int Count=(H-1);
					for(int h=0;h<=H-1;h++)
					 {
						 
						for(int Space=1;Space<=Count;Space++ )
						{
								printf(" ");
						}
						for(int n=Count;n<=(H-1)+h;n++ )
						{
								printf("*");
						}
						printf("\n");
						Count--;		 
					 }
				}
				else
				{
					printf("Max Height Is 255");
				}
				 
}