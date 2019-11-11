package app;

import java.util.*;

public class App {
    public static void main(String[] args) throws Exception {
        ArrayList<Jogo> lista = new ArrayList<Jogo>();
        Scanner s = new Scanner(System.in);
        System.out.print("Quantos jogos quer cadastrar?\n>> ");
        int count = s.nextInt();

        for(int i = 0; i<count; i++){
            Jogo obj = new Jogo();
            System.out.print("Nome: ");
            s.skip("\n");
            obj.setNome(s.nextLine());
            System.out.print("Classificação: ");
            obj.setClassificacao(s.nextInt());
            System.out.print("Ano de lançamento: ");
            obj.setAnoLancamento(s.nextInt());
            System.out.print("Gênero: ");
            try {
                obj.setGenero(Genero.valueOf((s.next()).toUpperCase()));
            } catch (Exception e) {
                System.out.println("Genero não existente");
            }

            lista.add(obj);
            System.out.printf("Jogo \"%s\" adicionado à lista\n", obj.getNome());
        }
        s.close();

        System.out.println("Printando jogos...");
        for(Jogo x: lista){
            x.imprimeInfo();
        }
    }
}