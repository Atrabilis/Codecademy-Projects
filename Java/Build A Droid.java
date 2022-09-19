public class Droid{
  
  public String name;
  private int batteryLevel;

  public Droid(String droidName){
    name = droidName;
    batteryLevel = 100;
  }
  public String toString(){
    return "Hello, I’m the droid: " + name;
  }


  public void performTask(String task){
    System.out.println("Codey is performing task: "+ task);
    batteryLevel -= 10;
  }

  public int getBatteryLevel(){
    return batteryLevel;
  }
  
  public static void main(String[] args){
    Droid codey = new Droid("Codey");
    System.out.println(codey);
    codey.performTask("dancing");
    codey.performTask("Flying");
    System.out.println(codey.getBatteryLevel());

  }
}
