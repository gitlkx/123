void StringCount(char s[])
{
  int i,letter,blank,digit,other;
  letter=blank=digit=other=0;
  i=0;
  while(s[i] != '\0')
  {
    if(s[i]  >='A'&&s[i]  <='Z')
    letter++;
 
    else if(s[i]=='')
    blank++;
    else if(s[i] >='1'&&  s[i]<='9')
    digit++;
    else
    other++
  i++
  }
  printf("letter=%d,blank=%d,digit=%d,other=%d",letter,blank,digit,other)
  
}
