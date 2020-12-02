///////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
///////////////////////ASSIGNMENT 2 BY SHIVANSH SONI CSE8X//////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

int main(){
printf("PROGRAM TO COUNT NUMBER OF DIGIT IN NUMBER\n");
int n;

scanf("%d",&n);

int i  =0 ;
while(n>0){
i++;

n/=10;

}

printf("TOTAL NUMBER OF DIGIT IS %d",i);

return 0 ;
}

///////////////////////////////////////////////////////////




/////////////////////////////////////////////////////////

#include <stdio.h>
#define BASE 10

    int main()
    {

    printf("TO FIND FREQUENCY OF EACH DIGIT IN A NUMBER\n");

    

        long long num, n;
        int i, lastDigit;
        int freq[BASE];

        printf("Enter any number: ");
        scanf("%lld", &num);

        for (i = 0; i < BASE; i++)
        {
            freq[i] = 0;
        }

        n = num;

        while (n != 0)
        {

            lastDigit = n % 10;

            n /= 10;

            freq[lastDigit]++;
        }

        printf("Frequency of each digit in %lld is: \n", num);
        for (i = 0; i < BASE; i++)
        {
            printf("Frequency of %d = %d\n", i, freq[i]);
        }

        return 0;
    }


//////////////////////////////////////////////////////////////////////////


#include <stdio.h>

int main()
{
    int n, num = 0;

    printf("TO PRINT A GIVEN NUMBER IN WORDS\n\n\n\n ");
    printf("Enter any number to print in words: ");
    scanf("%d", &n);

   
    while(n != 0)
    {
        num = (num * 10) + (n % 10);
        n /= 10;
    }

    
    while(num != 0)
    {
        switch(num % 10)
        {
            case 0: 
                printf("Zero ");
                break;
            case 1: 
                printf("One ");
                break;
            case 2: 
                printf("Two ");
                break;
            case 3: 
                printf("Three ");
                break;
            case 4: 
                printf("Four ");
                break;
            case 5: 
                printf("Five ");
                break;
            case 6: 
                printf("Six ");
                break;
            case 7: 
                printf("Seven ");
                break;
            case 8: 
                printf("Eight ");
                break;
            case 9: 
                printf("Nine ");
                break;
        }
        
        num = num / 10;
    }

    return 0;
}
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
 
void main() {
   int i = 0;
   char ch;
 
   for (i = 0; i < 256; i++) {
      printf("%c ", ch);
      ch = ch + 1;
   }
}

////////////////////////////////////

#include <stdio.h>

#define SIZE 8

int main()
{
    char binary[SIZE + 1], onesComp[SIZE + 1];
    int i, error=0;

    printf("Enter %d bit binary value: ", SIZE);
    
    /* Input binary string from user */
    gets(binary);

    /* Store all inverted bits of binary value to onesComp */
    for(i=0; i<SIZE; i++)
    {
        if(binary[i] == '1')
        {
            onesComp[i] = '0';
        }
        else if(binary[i] == '0')
        {
            onesComp[i] = '1';
        }
        else
        {
            printf("Invalid Input");
            error = 1;

            /* Exits from loop */
            break;
        }
    }

    /* Marks the end of onesComp string */
    onesComp[SIZE] = '\0';

    /* Check if there are binary string contains no error */
    if(error == 0)
    {
        printf("Original binary = %s\n", binary);
        printf("Ones complement = %s", onesComp);
    }

    return 0;
}

/////////////////////////////////////////////

#include <stdio.h>  
int main()  
{  
   int n;  
   printf("Enter the number of bits do you want to enter :");  
   scanf("%d",&n);  
   char binary[n+1];  
   char onescomplement[n+1];  
   char twoscomplement[n+1]; 
   int carry=1; 
   printf("\nEnter the binary number : ");  
   scanf("%s", binary);  
   printf("%s", binary);  
   printf("\nThe ones complement of the binary number is :");  
     
  
   for(int i=0;i<n;i++)  
   {  
       if(binary[i]=='0')  
       onescomplement[i]='1';  
       else if(binary[i]=='1')  
       onescomplement[i]='0';  
   }  
   onescomplement[n]='\0';  
   printf("%s",onescomplement);  
    
  
printf("\nThe twos complement of a binary number is : ");  
    
for(int i=n-1; i>=0; i--)  
    {  
        if(onescomplement[i] == '1' && carry == 1)  
        {  
            twoscomplement[i] = '0';  
        }  
        else if(onescomplement[i] == '0' && carry == 1)  
        {  
            twoscomplement[i] = '1';  
            carry = 0;  
        }  
        else  
        {  
            twoscomplement[i] = onescomplement[i];  
        }  
    }  
twoscomplement[n]='\0';  
printf("%s",twoscomplement);  
return 0;  
}  


/////////////////////////////////////////////////////////////////
#include <math.h>
#include <stdio.h>
int convert(long long bin);
int main() {
    long long bin;
    printf("Enter a binary number: ");
    scanf("%lld", &bin);
    printf("%lld in binary = %d in octal", bin, convert(bin));
    return 0;
}

int convert(long long bin) {
    int oct = 0, dec = 0, i = 0;

    
    while (bin != 0) {
        dec += (bin % 10) * pow(2, i);
        ++i;
        bin /= 10;
    }
    i = 1;

   
    while (dec != 0) {
        oct += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }
    return oct;
}

//////////////////////////////////////////////////


#include <stdio.h>
 
void main()
{
    int  num, binary_val, decimal_val = 0, base = 1, rem;
 
    printf("Enter a binary number(1s and 0s) \n");
    scanf("%d", &num); 
    binary_val = num;
    while (num > 0)
    {
        rem = num % 10;
        decimal_val = decimal_val + rem * base;
        num = num / 10 ;
        base = base * 2;
    }
    printf("The Binary number is = %d \n", binary_val);
    printf("Its decimal equivalent is = %d \n", decimal_val);
}
///////////////////////////////////////////////

#include <stdio.h>
 
int main()
{
    long int binaryval, hexadecimalval = 0, i = 1, remainder;
 
    printf("Enter the binary number: ");
    scanf("%ld", &binaryval);
    while (binaryval != 0)
    {
        remainder = binaryval % 10;
        hexadecimalval = hexadecimalval + remainder * i;
        i = i * 2;
        binaryval = binaryval / 10;
    }
    printf("Equivalent hexadecimal value: %lX", hexadecimalval);
    return 0;
}

///////////////////////////////////////////////////


#include <stdio.h>
#define MAX 1000
 
int main()
{
    char octalnum[MAX];
    long i = 0;
 
    printf("Enter any octal number: ");
    scanf("%s", octalnum);
    printf("Equivalent binary value: ");
    while (octalnum[i])
    {
        switch (octalnum[i])
        {
        case '0':
            printf("000"); break;
        case '1':
            printf("001"); break;
        case '2':
            printf("010"); break;
        case '3':
            printf("011"); break;
        case '4':
            printf("100"); break;
        case '5':
            printf("101"); break;
        case '6':
            printf("110"); break;
        case '7':
            printf("111"); break;
        default:
            printf("\n Invalid octal digit %c ", octalnum[i]);
            return 0;
        }
        i++;
    }
    return 0;
}

//////////////////////////////////////////

#include <stdio.h>  
#include<string.h>  
int main()  
{  
  int octaltobinary[]={0,1,10,11,100,101,110,111};  
  char hexadecimal[10];  
   char hex[10];  
  long int binary=0;  
  int octal;  
  int rem=0;  
  int position=1;  
  int len=0;  
   int k=0;  
  printf("Enter a octal number");  
  scanf("%d",&octal);  
while(octal!=0)  
  {  
      rem=octal%10;  
      binary=octaltobinary[rem]*position+binary;  
      octal=octal/10;  
      position=position*1000;  
  }  
  printf("The binary number is : %ld",binary);  
  while(binary > 0)  
    {  
        rem = binary % 10000;  
        switch(rem)  
        {  
            case 0:  
                strcat(hexadecimal, "0");  
                break;  
            case 1:  
                strcat(hexadecimal, "1");  
                break;  
            case 10:  
                strcat(hexadecimal, "2");  
                break;  
            case 11:  
                strcat(hexadecimal, "3");  
                break;  
            case 100:  
                strcat(hexadecimal, "4");  
                break;  
            case 101:  
                strcat(hexadecimal, "5");  
                break;  
            case 110:  
                strcat(hexadecimal, "6");  
                break;  
            case 111:  
                strcat(hexadecimal, "7");  
                break;  
            case 1000:  
                strcat(hexadecimal, "8");  
                break;  
            case 1001:  
                strcat(hexadecimal, "9");  
                break;  
            case 1010:  
                strcat(hexadecimal, "A");  
                break;  
            case 1011:  
                strcat(hexadecimal, "B");  
                break;  
            case 1100:  
                strcat(hexadecimal, "C");  
                break;  
            case 1101:  
                strcat(hexadecimal, "D");  
                break;  
            case 1110:  
                strcat(hexadecimal, "E");  
                break;  
            case 1111:  
                strcat(hexadecimal, "F");  
            break;  
        }  
len=len+1;  
        binary /= 10000;  
    }  
  for(int i=len-1;i>=0;i--)  
{  
    hex[k]=hexadecimal[i];  
    k++;  
}  
hex[len]='\0';  
printf("\nThe hexadecimal number is :");  
for(int i=0; hex[i]!='\0';i++)  
{  
    printf("%c",hex[i]);  
}  
  
    return 0;  
}  



#include <stdio.h>
#include <math.h>
 
int main()
{
 
    long int octal, decimal = 0;
    int i = 0;
 
    printf("Enter any octal number: ");
    scanf("%ld", &octal);
    while (octal != 0)
    {
        decimal =  decimal +(octal % 10)* pow(8, i++);
        octal = octal / 10;
    }
    printf("Equivalent decimal value: %ld",decimal);
    return 0;
}
//////////////////////////////////////////////////

#include<stdio.h>    
#include<stdlib.h>  
int main(){  
int a[10],n,i;    
system ("cls");  
printf("Enter the number to convert: ");    
scanf("%d",&n);    
for(i=0;n>0;i++)    
{    
a[i]=n%2;    
n=n/2;    
}    
printf("\nBinary of Given Number is=");    
for(i=i-1;i>=0;i--)    
{    
printf("%d",a[i]);    
}    
return 0;  
}  

//////////////////////////////////////

#include <stdio.h>
 
int main()
{
    long decimalnum, remainder, quotient;
    int octalNumber[100], i = 1, j;
 
    printf("Enter the decimal number: ");
    scanf("%ld", &decimalnum);
    quotient = decimalnum;
    while (quotient != 0)
    {
        octalNumber[i++] = quotient % 8;
        quotient = quotient / 8;
    }
    printf("Equivalent octal value of decimal no %d: ", decimalnum);
    for (j = i - 1; j > 0; j--)
        printf("%d", octalNumber[j]);
    return 0;
}

//////////////////////////////////////////////////////


#include <stdio.h>
 
int main()
{
    long decimalnum, quotient, remainder;
    int i, j = 0;
    char hexadecimalnum[100];
 
    printf("Enter decimal number: ");
    scanf("%ld", &decimalnum);
 
    quotient = decimalnum;
 
    while (quotient != 0)
    {
        remainder = quotient % 16;
        if (remainder < 10)
            hexadecimalnum[j++] = 48 + remainder;
        else
            hexadecimalnum[j++] = 55 + remainder;
        quotient = quotient / 16;
    }
    printf("Hexadecimal :\n");

    for (i = j; i >= 0; i--)
            
        printf("%c", hexadecimalnum[i]);
    return 0;
}

////////////////////////////////////////////////////////


#include <stdio.h>
#define MAX 1000
 
int main()
{
    char binarynum[MAX], hexa[MAX];
    long int i = 0;
 
    printf("Enter the value for hexadecimal ");
    scanf("%s", hexa);
    printf("\n Equivalent binary value: ");
    while (hexa[i])
    {
        switch (hexa[i])
        {
        case '0':
            printf("0000"); break;
        case '1':
            printf("0001"); break;
        case '2':
            printf("0010"); break;
        case '3':
            printf("0011"); break;
        case '4':
            printf("0100"); break;
        case '5':
            printf("0101"); break;
        case '6':
            printf("0110"); break;
        case '7':
            printf("0111"); break;
        case '8':
            printf("1000"); break;
        case '9':
            printf("1001"); break;
        case 'A':
            printf("1010"); break;
        case 'B':
            printf("1011"); break;
        case 'C':
            printf("1100"); break;
        case 'D':
            printf("1101"); break;
        case 'E':
            printf("1110"); break;
        case 'F':
            printf("1111"); break;
        case 'a':
            printf("1010"); break;
        case 'b':
            printf("1011"); break;
        case 'c':
            printf("1100"); break;
        case 'd':
            printf("1101"); break;
        case 'e':
            printf("1110"); break;
        case 'f':
            printf("1111"); break;
        default:
            printf("\n Invalid hexa digit %c ", hexa[i]);
            return 0;
        }
        i++;
    }
    return 0;
}



//////////////////////////////////////////////////////////

#include <stdio.h>

int main()
{
    char hex[17];
    long long octal, bin, place;
    int i = 0, rem, val;
    printf("Enter any hexadecimal number: ");
    gets(hex);

    octal = 0ll;
    bin = 0ll;
    place = 0ll;
    for(i=0; hex[i]!='\0'; i++)
    {
        bin = bin * place;

        switch(hex[i])
        {
            case '0':
                bin += 0;
                break;
            case '1':
                bin += 1;
                break;
            case '2':
                bin += 10;
                break;
            case '3':
                bin += 11;
                break;
            case '4':
                bin += 100;
                break;
            case '5':
                bin += 101;
                break;
            case '6':
                bin += 110;
                break;
            case '7':
                bin += 111;
                break;
            case '8':
                bin += 1000;
                break;
            case '9':
                bin += 1001;
                break;
            case 'a':
            case 'A':
                bin += 1010;
                break;
            case 'b':
            case 'B':
                bin += 1011;
                break;
            case 'c':
            case 'C':
                bin += 1100;
                break;
            case 'd':
            case 'D':
                bin += 1101;
                break;
            case 'e':
            case 'E':
                bin += 1110;
                break;
            case 'f':
            case 'F':
                bin += 1111;
                break;
            default:
                printf("Invalid hexadecimal input.");
        }

        place = 10000;
    }

    place = 1;
    while(bin > 0)
    {
        rem = bin % 1000;

        switch(rem)
        {
            case 0:
                val = 0;
                break;
            case 1:
                val = 1;
                break;
            case 10:
                val = 2;
                break;
            case 11:
                val = 3;
                break;
            case 100:
                val = 4;
                break;
            case 101:
                val = 5;
                break;
            case 110:
                val = 6;
                break;
            case 111:
                val = 7;
                break;
        }

        octal = (val * place) + octal;
        bin /= 1000;

        place *= 10;
    }

    printf("Hexadecimal number = %s\n", hex);
    printf("Octal number = %lld", octal);

    return 0;
}


//////////////////////////////////////////////////////////


#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char hex[17];
    long long decimal, place;
    int i = 0, val, len;

    decimal = 0;
    place = 1;
    printf("Enter any hexadecimal number: ");
    gets(hex);
    len = strlen(hex);
    len--;
    for(i=0; hex[i]!='\0'; i++)
    {
        if(hex[i]>='0' && hex[i]<='9')
        {
            val = hex[i] - 48;
        }
        else if(hex[i]>='a' && hex[i]<='f')
        {
            val = hex[i] - 97 + 10;
        }
        else if(hex[i]>='A' && hex[i]<='F')
        {
            val = hex[i] - 65 + 10;
        }

        decimal += val * pow(16, len);
        len--;
    }

    printf("Hexadecimal number = %s\n", hex);
    printf("Decimal number = %lld", decimal);

    return 0;
}



#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char hex[17];
    long long decimal, place;
    int i = 0, val, len;

    decimal = 0;
    place = 1;
    printf("Enter any hexadecimal number: ");
    gets(hex);
    len = strlen(hex);
    len--;
    for(i=0; hex[i]!='\0'; i++)
    {
        if(hex[i]>='0' && hex[i]<='9')
        {
            val = hex[i] - 48;
        }
        else if(hex[i]>='a' && hex[i]<='f')
        {
            val = hex[i] - 97 + 10;
        }
        else if(hex[i]>='A' && hex[i]<='F')
        {
            val = hex[i] - 65 + 10;
        }

        decimal += val * pow(16, len);
        len--;
    }

    printf("Hexadecimal number = %s\n", hex);
    printf("Decimal number = %lld", decimal);

    return 0;
}


//////////////////////////////////////////////////////////////////


#include <stdio.h>
#include <math.h>

int main()
{
    int num, swappedNum;
    int firstDigit, lastDigit, digits;
    printf("Enter any number: ");
    scanf("%d", &num);
    lastDigit  = num % 10; 
    digits     = (int) log10(num); 
    firstDigit = (int) (num / pow(10, digits));

    swappedNum  = lastDigit;
    swappedNum *= (int) round(pow(10, digits));
    swappedNum += num % ((int)round(pow(10, digits)));
    swappedNum -= lastDigit;
    swappedNum += firstDigit;

    printf("Original number = %d", num);
    printf("Number after swapping first and last digit: %d", swappedNum);

    return 0;
}
////////////////////////////////////////////////////////////////
///////////////////////// PATTERN QUESTIONS///////////////////////////////

#include <stdio.h>

int main(){

printf("PYRAMID \n");
int n = 7;

for(int i =1;i<=n;i++){

    for(int j =1;j<=i;j++){
    if(j<=(n-i)){
        printf(" ");
    }
    else{
        printf("*");
    }

    }
    printf("\n");

    }

  return 0 ;
}

///////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main(){

printf("INVERTED PYRAMID \n\n\n\n");
int n = 7;

for(int i = n;i>=1;i--){

    for(int j =1;j<=i;j++){
    if(j<=(n-i)){
        printf(" ");
    }
    else{
        printf("*");
    }

    }
    printf("\n");

    }

  return 0 ;
}
////////////////////////////////////////////////////////

#include <stdio.h>

int main()
{
    int i, j, rows;
    printf("Enter number of rows : ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        for(j=i; j<rows; j++)
        {
            printf(" ");
        }
        for(j=1; j<=(2*i-1); j++)
        {
            if(i==rows || j==1 || j==(2*i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

//////////////////////////////////////////////////////
#include <stdio.h>

int main()
{
    int i, j, rows;
    printf("Enter number of rows : ");
    scanf("%d", &rows);

    for(i=rows; i>=1; i--)
    {
        for(j=i; j<rows; j++)
        {
            printf(" ");
        }
        for(j=1; j<=(2*i-1); j++)
        {
            if(i==rows || j==1 || j==(2*i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

//////////////////////////////////////

#include <stdio.h>

int main(){

printf("DIAMOND \n\n\n\n");
int n = 6;

for(int i = 1;i<=n;i++){

    for(int j =1;j<=i;j++){
    if(j<=(n-i)){
        printf(" ");
    }
    else{
        printf("*");
    }

    }
    printf("\n");

    }

for(int i = n;i>=1;i--){

    for(int j =1;j<=i;j++){
    if(j<=(n-i)){
        printf(" ");
    }
    else{
        printf("*");
    }

    }
    printf("\n");

    }

  return 0 ;
}

/////////////////////////////////////

#include <stdio.h>

int main(){

printf("rectangle pattern using 1 \n\n");
int n = 6;

for(int i = 1;i<=n;i++){

    for(int j =1;j<=n;j++){
    printf("1");

    }
    printf("\n");

    }

  return 0 ;
}

//////////////////////////////////////////////

#include <stdio.h>

int main(){

printf("rectangle pattern using 1 and 0 alternatively \n\n\n\n");
int n = 6;

for(int i = 1;i<=n;i++){

    for(int j =1;j<=n;j++){
     if(i%2==0){
        printf("0");

    }
    else{

        printf("1");
    }

    }
    printf("\n");
}
  return 0 ;
}

/////////////////////////////////////////////

#include <stdio.h>

int main(){

printf("rectangle pattern using 1 and 0 alternatively in line \n\n\n\n");
int n = 5;

for(int i = 1;i<=n;i++){

    for(int j =1;j<=n;j++){
     if(j%2==0){
        printf("1");

    }
    else{

        printf("0");
    }

    }
    printf("\n");
}
  return 0 ;
}

//////////////////////////////////////////////

#include <stdio.h>

int main(){

printf("rectangle pattern using 1 and 0 placing 000 in middle \n\n\n\n");
int n = 5;

for(int i = 1;i<=n;i++){

    for(int j =1;j<=n;j++){
     if((j>1&&j<n)&&(i>1&&i<n)){
        printf("0");

    }
    else{

        printf("1");
    }

    }
    printf("\n");
}
  return 0 ;
}

////////////////////////////////////////////

#include <stdio.h>

int main(){

printf("rectangle pattern using 1 and 0 placing 0 in middle \n\n\n\n");
int n = 5;

for(int i = 1;i<=n;i++){

    for(int j =1;j<=n;j++){
     if(j==3&&i==3){
        printf("0");

    }
    else{

        printf("1");
    }

    }
    printf("\n");
}
  return 0 ;
}

///////////////////////////////////////////

#include <stdio.h>

int main(){

printf("rectangle pattern using 1 and 0 by alternative 1 and 0 \n\n\n\n");
int n = 5;

  int counter = 1;
for(int i = 1;i<=n;i++){

    for(int j =1;j<=n;j++){

     if(counter%2==0){
        printf("0");

    }
    else{

        printf("1");
    }
     counter++;

    }
    printf("\n");
}
  return 0 ;
}

/////////////////////////////////////////////

////////////////////////////// IF ELSE PROGRAMS :)//////////////////////////////

#include <stdio.h>

int main(){

printf("TO CHECK IF THE NUMBER IS DIVISIBLE BY 5 AND 11 OR NOT \n\n\n\n");

int n ;

scanf("%d",&n);

if((n%5==0)&&(n%11==0)){
    printf("IT IS DIVISIBLE\n");
}else
{
    printf("its is not divible by 5 and 11");
}

  return 0 ;
}

///////////////////////////////////////////////////////////

#include <stdio.h>

 int main() {

printf("TO CHECK IF THE CHARACTER IS UPPER CASE OR LOWER CASE\n");
// 65 to 90
// 97 to 122

char abc;
scanf("%c",&abc);

int ascii = abc;

if (ascii>=65 && ascii<=90)
{printf(" IT IS A UPPERCASE");
  /* code */
}else if (ascii>=97 && ascii<=122)
{
  printf("IT IS A LOWER CASE");

}else
{
  printf("YOU ENTERED A SPECIAL CHARCTER OR NUMBER\n");
};

    return 0;
}

///////////////////////////////////////////////////////////////////

#include<stdio.h>
 int main()
{
  int week;
  printf("Enter week number (1-7): ");
  scanf("%d", &week);
  if (week == 1)
  {
    printf("Monday");
  }
  else if (week == 2)
  {
    printf("Tuesday");
  }
  else if (week == 3)
  {
    printf("Wednesday");
  }
  else if (week == 4)
  {
    printf("Thursday");
  }
  else if (week == 5)
  {
    printf("Friday");
  }
  else if (week == 6)
  {
    printf("Saturday");
  }
  else if (week == 7)
  {
    printf("Sunday");
  }
  else
  {
    printf("Invalid Input! Please enter week number between 1-7.");
  }
  return 0;
}

///////////////////////////////////////////////

#include <stdio.h>

int main() {

printf("TO PRINT NUMBER OF DAYS FOR THE MONTH NUMBER\n");

int n ;
scanf("%d",&n);

if (n==1)
{
  printf("31\n");
}else if (n==2)
{
  printf("28\n");
}else if (n==3)
{
  printf("31\n");
}
else if (n==4)
{
  printf("30\n");
}
else if (n==5)
{
  printf("31\n");
}
else if (n==6)
{
  printf("30\n");
}
else if (n==7)
{
  printf("31\n");
}
else if (n==8)
{
  printf("31\n");
}
else if (n==9)
{
  printf("30\n");
}
else if (n==10)
{
  printf("31\n");
}
else if (n==11)
{
  printf("30\n");
}
else if (n==12)
{
  printf("31\n");
};

    return 0;
}

//////////////////////////////////////////////////////////////

#include <stdio.h>

int main() {

  printf("COUNT TOTAL NUMBER OF NOTES IN GIVEN AMOUNT\n");

   int n;

   scanf("%d",&n);

   printf("CHOOSE 1 FOR 2000RS NOTE || CHOOSE 2 FOR 500RS || CHOOSE 3 FOR 100RS || CHOOSE 4 FOR 50RS || CHOOSE 5 FOR 20 RS || CHOOSE 6 FOR 10RS \n\n");

   int a ;
   scanf("%d",&a);

   if (a==1)
   {
     n/=2000;
     printf("%dNOTES",n);
   }else if (a==2)
   {
     n/=500;
    printf("%dNOTES",n);
   }
   else if (a==3)
   {
     n/=100;
     printf("%dNOTES",n);
   }
   else if (a==4)
   {
     n/=50;
     printf("%dNOTES",n);
   }
  else if (a==5)
  {
    n/=20;
     printf("%dNOTES",n);
  }
 else if (a==6)
 {
   n/=10;
     printf("%dNOTES",n);
 }

    return 0;
}

////////////////////////////////////////////////////////

#include <stdio.h>

int main() {

 printf("TO CHECK IF TRIANGLE IS VALID OR NOT\n");

 int a,b,c;

 scanf("%d%d%d",&a,&b,&c);

 if (a+b+c == 180)
 {
   printf("TRIANGLE IS VALID\n");
 }else
 {
   printf("TRIANGLE IS NOT VALID");
 };

    return 0;
}

/////////////////////////////////////////////
#include <stdio.h>
int main()
{
  int side1, side2, side3;
  printf("TO INPUT ALL SIDES OF TRIANGLE AND CHECK IF ITS VALID OR NOT");
  printf("\n Please Enter Three Sides of a Triangle : ");
  scanf("%d%d%d", &side1, &side2, &side3);
  if ((side1 + side2 > side3) && (side2 + side3 > side1) && (side1 + side3 > side2))
  {
    printf("\n This is a Valid Traingle");
  }
  else
  {
    printf("\n This is an Invalid Triangle");
  }
  return 0;
}

////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main() {

  printf("TO CHECK IF TRIANGLE IS EQUILATERAL,ISOCELES,OR SCALENE\n");
  int a,b,c;

  scanf("%d%d%d",&a,&b,&c);

  if (a==b && b==c)
  {
    printf("IT IS A EQUILATERAL TRIANGLE\n");

  }else if (a==b || b==c || a==c)
  {
    printf("IT IS A ISOCELES TRIANGLE\n");
  }else
  {
    printf("ITS IS A SCALENE TRIANGLE\n");
  };

    return 0;
}

//////////////////////////////////////////////////////////////////

#include <stdio.h>

int main() {

  printf("TO CHECK PROFIT OR LOSS\n");
  int a,b,c;

  printf("ENTER BUYING PRICE\n");

  scanf("%d",&a);

  printf("ENTER SELLING PRICE\n");
  scanf("%d",&b);

  int pf = b -a ;
  if (pf>1)
  {
    printf("PROFIT OF %d RUPEES\n",pf);
  }else
  {
    printf("LOSS OF %d RUPEES\n",pf);
  };

    return 0;
}

//////////////////////////////////////////////////////

#include <stdio.h>

int main()
{

  printf("TO CALCULATE PERCENTAGE AND GRADE OF STUDENT\n");
    int phy, chem, bio, math, comp;
    float per;

    printf("Enter five subjects marks:  write in this sequence phy,chem,bio,math,comp\n ");
    scanf("%d%d%d%d%d", &phy, &chem, &bio, &math, &comp);

    per = (phy + chem + bio + math + comp) / 5.0;

    printf("Percentage = %.2f\n", per);

    if(per >= 90)
    {
        printf("Grade A");
    }
    else if(per >= 80)
    {
        printf("Grade B");
    }
    else if(per >= 70)
    {
        printf("Grade C");
    }
    else if(per >= 60)
    {
        printf("Grade D");
    }
    else if(per >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}

////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main()
{

  printf("TO CALCULATE GROSS SALARY\n");
    float basic, gross, da, hra;

    printf("Enter basic salary of an employee: ");
    scanf("%f", &basic);

    if(basic <= 10000)
    {
        da  = basic * 0.8;
        hra = basic * 0.2;
    }
    else if(basic <= 20000)
    {
        da  = basic * 0.9;
        hra = basic * 0.25;
    }
    else
    {
        da  = basic * 0.95;
        hra = basic * 0.3;
    }

    gross = basic + hra + da;

    printf("GROSS SALARY OF EMPLOYEE = %.2f", gross);

    return 0;
}

///////////////////////////////////////////////////////////

#include <stdio.h>

int main()
{
  printf("ELCTRICITY BILL CALCULATE\n");
    int unit;
    float amt, total_amt, sur_charge;

    printf("Enter total units consumed: ");
    scanf("%d", &unit);

    if(unit <= 50)
    {
        amt = unit * 0.50;
    }
    else if(unit <= 150)
    {
        amt = 25 + ((unit-50) * 0.75);
    }
    else if(unit <= 250)
    {
        amt = 100 + ((unit-150) * 1.20);
    }
    else
    {
        amt = 220 + ((unit-250) * 1.50);
    }

    sur_charge = amt * 0.20;
    total_amt  = amt + sur_charge;

    printf("Electricity Bill = Rs. %.2f", total_amt);

    return 0;
}

//////////////////////////////////////END////////////////////////////////////


