/* kullanici tarafindan girilen metnin sifrelenip cozulmesini saglayan yazilim */

#include <stdio.h>
#include <string.h>


void encrypt(/*parametreler*/char password[], int key)
{
  /* isaretsiz (unsigned) on eki kullanildigi taktirde,
	 veri tipi ile saklanacak degerin sifir ve sifirdan buyuk olmasi saglanir.*/

  unsigned int i;
  for (i = 0; i < strlen(password); ++i)
  // strlen : karakter dizisini verir. 
  // ++i : degiskenin degerini bir arttir. sonra donguyu islet.
  {
 
  password[i] = password[i] - key;

 }
}

void decrypt(char password[], int key)
{
   unsigned int i;
   for (i = 0; i < strlen(password); ++i)
   {
     password[i] = password[i] + key;
   }
}

int main()
{
       //0xFACA unicode karakter
  char password[20];
  printf("select the text to encrypt: \n ");
  scanf("%s", password);
  printf("the value you entered      : %s\n,password");
  encrypt(password, 0xFACA);
  printf("encrypted format    : %s\n", password);
  decrypt(password, 0xFACA);
  printf("decrypted format    : %s\n", password);
  return 0;
}






