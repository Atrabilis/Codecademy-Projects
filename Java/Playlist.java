import java.util.ArrayList;

class Playlist {
  
  public static void main(String[] args) {
    ArrayList<String> desertIslandPlaylist = new ArrayList<String>();
    desertIslandPlaylist.add("song1");
    desertIslandPlaylist.add("song2");
    desertIslandPlaylist.add("song3");
    desertIslandPlaylist.add("song4");
    desertIslandPlaylist.add("song5");
    desertIslandPlaylist.add("song6");
    desertIslandPlaylist.remove("song3");

    String songA = "song6";
    String songB = "song1";
    desertIslandPlaylist.set(0,songA);
    desertIslandPlaylist.set(4,songB);
    System.out.println(desertIslandPlaylist);
    System.out.println(desertIslandPlaylist.size());
  }
}
