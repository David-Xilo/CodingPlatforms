public class FindTheMissingLetter
{
  public static char findMissingLetter(char[] array)
  {
    char a = array[0];
    for(char i : array){
      if( a != i ){
        break;
      }
      ++a;
    }
    return a;
  }
}
