import java.io.*;

public class JavaTest {
  public static void main(String[] args) {
    BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
    try {
      String line = reader.readLine();
      if (line.equals("add two numbers")) {
        Integer a = Integer.parseInt(reader.readLine());
        Integer b = Integer.parseInt(reader.readLine());
        System.out.println(a + b);
      } else if (line.equals("tle")) {
        while(true) continue;
      } else {
        System.out.println("Hola, mundo");
      }
    } catch (IOException e) {
      e.printStackTrace();
    } finally {
      try {
        reader.close();
      } catch (IOException ignorable) {
      }
    }
  }
}
