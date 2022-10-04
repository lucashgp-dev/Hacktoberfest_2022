import java.io.IOException;
import java.util.Scanner;

public class Main {
  public static void main(String[] args) throws IOException {
    Scanner input = new Scanner(System.in);
    int horaInicial, horaFinal, cont = 0;
    boolean on = true;

    horaInicial = input.nextInt();
    horaFinal = input.nextInt();
    
    if(horaInicial == horaFinal){
      cont = 24;
      on = false;
    }

    while(on){
      if(horaInicial == horaFinal){
        on = false;
      }
      else{
        cont++;
        horaInicial++;
        if(horaInicial == 24){
          horaInicial = 0;
        }
      }
    }

    System.out.println("O JOGO DUROU " + cont + " HORA(S)");

    input.close();
  }
 
}
