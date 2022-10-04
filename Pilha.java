import java.util.Scanner;

public class Pilha {
    public Object[] pilha;
    public int posicaoPilha;

    public Pilha() {
        this.posicaoPilha = -1;
        this.pilha = new Object[1000];
    }

    public boolean pilhaVazia() {
        if (this.posicaoPilha == -1) {
            return true;
        }
        return false;
    }

    public int tamanho() {
        if (this.pilhaVazia()) {
            return 0;
        }
        return this.posicaoPilha + 1;
    }

    public Object exibeUltimoValor() {
        if (this.pilhaVazia()) {
            return null;
        }
        return this.pilha[this.posicaoPilha];
    }

    public Object desempilhar() {
        if (pilhaVazia()) {
            return null;
        }
        return this.pilha[this.posicaoPilha--];
    }

    public void empilhar(Object valor) {
        if (this.posicaoPilha < this.pilha.length - 1) {
            this.pilha[++posicaoPilha] = valor;
        }
    }

    public void print() {

        for (int i = posicaoPilha; i >= 0; i--) {
            if (i != 0) {
                System.out.printf("%d ", pilha[i]);
            } else {
                System.out.printf("%d", pilha[i]);
            }
        }
        System.out.printf("\n");

    }

    public static void main(String[] args) {

        Pilha pilha = new Pilha();
        Scanner sc = new Scanner(System.in);

        while (sc.hasNextLine()) {
            String entrada = sc.nextLine();
            String[] dados = entrada.split(" ");

            if (dados[0].equals("Empilhar")) {
                pilha.empilhar(Integer.parseInt(dados[1]));
            } 
            else if (dados[0].equals("Desempilhar")) {
                pilha.desempilhar();
            } 
            else if (dados[0].equals("Imprimir")) {
                pilha.print();
            } 
            else if (dados[0].equals("Finalizar")) {
                break;
            }
        }
        sc.close();

    }
}