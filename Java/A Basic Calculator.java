//This is a basic calculator.

public class Calculator{
  public Calculator(){

  }
  
  public int add(int num1, int num2){
    return num1 + num2;
  }

  public int substract(int num1, int num2){
    return num1 - num2;
  }

  public int multiply(int num1, int num2){
    return num1 * num2;
  }

  public int divide(int num1, int num2){
    return num1 / num2;
  }

  public int modulo(int num1, int num2){
    return num1 % num2;
  }

  public static void main(String[] args){
    Calculator myCalculator = new Calculator();
    System.out.println(myCalculator.add(5,7));
    System.out.println(myCalculator.substract(45,11));
  }
}
