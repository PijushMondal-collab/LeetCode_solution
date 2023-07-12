class Solution {
    public int reverse(int x) {
      long rev=0;
       while(x!=0){
           int last_digit=x%10;
           rev=rev*10+last_digit;
           x=x/10;
       }
       if(rev<Integer.MIN_VALUE||rev>Integer.MAX_VALUE)
       {
           return 0;
       }
       else if(x<0){
           return (int)(-1*rev);
       }
       return (int)rev;
    }
}