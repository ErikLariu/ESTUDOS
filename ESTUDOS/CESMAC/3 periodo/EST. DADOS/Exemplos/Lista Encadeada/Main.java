class No {
    String valor;
    No prox;

    No(String valorInicial) {
        valor = valorInicial;
        prox = null;
    }
}

class Lista {
    No inicio;
    No fim;

    Lista() {
        inicio = null;
        fim = null;
    }

    void incluirNoInicio(No novoNo) {
        if (inicio == null && fim == null) {
            inicio = novoNo;
            fim = novoNo;
        } else {
            novoNo.prox = inicio;
            inicio = novoNo;
        }
    }

    void incluirNoFim(No novoNo) {
        if (fim == null && inicio == null) {
            inicio = novoNo;
            fim = novoNo;
        } else {
            fim.prox = novoNo;
            fim = novoNo;
        }
    }

    void exibir() {
        System.out.println("\n");
        No noAtual = inicio;
        while (noAtual != null) {
            System.out.print(noAtual.valor + " -> ");
            noAtual = noAtual.prox;
        }
        System.out.print("NULL");
    }

    void removerPeloFim() {
        if (inicio == fim) {
            inicio = null;
            fim = null;
        } else {
            No noAtual = inicio;
            while (noAtual.prox != fim) {
                noAtual = noAtual.prox;
            }
            noAtual.prox = null;
            fim = noAtual;
        }
    }

    void removerPeloInicio() {
        if (inicio == fim) {
            inicio = null;
            fim = null;
        } else {
            inicio = inicio.prox;
        }
    }
}

public class Main {
    public static void main(String[] args) {

        No noA = new No("A");
        No noB = new No("B");
        No noC = new No("C");
        No noD = new No("D");
        No noE = new No("E");
        No noF = new No("F");
        Lista lista = new Lista();

        lista.incluirNoInicio(noB);
        lista.incluirNoFim(noC);
        lista.exibir();

        lista.incluirNoInicio(noA);
        lista.incluirNoFim(noD);
        lista.incluirNoFim(noE);
        lista.incluirNoFim(noF);
        lista.exibir();

        lista.removerPeloFim();
        lista.exibir();

        lista.removerPeloInicio();
        lista.exibir();

        lista.removerPeloInicio();
        lista.removerPeloInicio();
        lista.removerPeloInicio();
        lista.exibir();

    }
}