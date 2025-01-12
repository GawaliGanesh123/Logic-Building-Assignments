/* Accept one character from user and convert case of that character.
  
Input:a 
Output: A
  
Input : D
Output: d

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


void Display(char CValue)
{
	 if( CValue == 'A'&& 'Z')
	 {
	 	
	 	printf("%c",CValue+32);
	 }
	 else if(CValue == 'a' && 'z')
	 {
	 	printf("%c",CValue-32);
	 }

	
}

int main()
{
	 char iChar='\0';
	printf("Enter the Character:\n");
	scanf("%c",&iChar);
     
     Display(iChar);


	return 0;
}
