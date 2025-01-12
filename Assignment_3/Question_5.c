/* Accept on character from user and check whether that character is vowel (a,e,i,o,u) or not.
  
Input: E 
Output: TRUE
  
Input: dd 
Output: FALSE

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>3
#include<stdbool.h>


int CheckVowel(char CValue)
{

  if(CValue=='a'|| CValue=='e' || CValue=='i' || CValue=='o' || CValue=='u')
  {
  	return 1;
  }
  else
  {
  	return 0;
  }


}

int main()
{
	 char iChar='\0';
	 int iRet=0;
	printf("Enter the Character:\n");
	scanf("%c",&iChar);
     
    iRet=CheckVowel(iChar);
      if(iRet == 1)
      {
      	printf("%c\nCharacter is vowel",iChar);
      }
      else
      {
      	printf("%C\nCharacter is not vowel",iChar);
      }

	return 0;
}
