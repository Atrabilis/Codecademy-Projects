public class DNA {
 
  public static void main(String[] args) {
 
    //  -. .-.   .-. .-.   .
    //    \   \ /   \   \ / 
    //   / \   \   / \   \  
    //  ~   `-~ `-`   `-~ `-
    
    String dna1 = "ATGCGATACGCTTGA";
    String dna2 = "ATGCGATACGTGA";
    String dna3 = "ATTAATATGTACTGA";
    String dna = dna1;
    System.out.println(dna.length());
    System.out.println(dna.indexOf("TGA") - dna.indexOf("ATG")-3);

    if(dna.indexOf("ATG")!= -1 && 
    dna.substring(dna.length()-3,dna.length()).equals("TGA") &&
    (dna.indexOf("TGA") - dna.indexOf("ATG") -3)%3 == 0){
      String protein = dna.substring(3,dna.length()-3);
      System.out.println(protein);
    }
    else{
      System.out.println("No protein.");
    }
  }
}
