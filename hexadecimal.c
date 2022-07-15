#include <stdio.h>  
#include <stdlib.h>  

int main()  
{  
    int binary, hexadecimal = 0, i = 1, remainder;
    printf("Binary formatinda deger giriniz:");
    scanf("%d",&binary);
    
    while (binary != 0){
    	remainder = binary % 10;
		hexadecimal = hexadecimal + remainder * i;
		i = i * 2;
		binary = binary / 10;
}
		
	
	printf("Hexadecimal degeri: %1X",hexadecimal);    
      return 0;
}  
