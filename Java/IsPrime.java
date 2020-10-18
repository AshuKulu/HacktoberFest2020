public class isPrime(){
public static boolean isPrime(int number){
  int cont = 2;
  boolean prime=true;
  while ((prime) && (cont!=number)){
    if (number % cont == 0)
      prime = false;
    cont++;
  }
  return prime;
}
}