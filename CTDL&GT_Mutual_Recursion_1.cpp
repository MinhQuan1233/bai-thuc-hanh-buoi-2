bool isEven(int n);
bool isOdd(int n);
 
bool isEven(int n){
  if(n == 0)
    return true;
  else
    return isOdd(n - 1);
}
 
bool isOdd(int n){
  return !isEven(n);
}
https://freetuts.net/
