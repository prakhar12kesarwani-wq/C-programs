bool isPalindrome(int x) 
{
  int n=x,rev=0,remainder; 
  while(n>0)
  {
    remainder=n%10;
    rev=rev*10+remainder;
    n=n/10;
  }  
  if(rev==x)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
