package app;

import java.util.Date;

public class App {
    public static void main(String[] args) throws Exception {
        RedeSocial foicebook = new RedeSocial("foicebook");
        String[] nomesUsers = {"davi", "rodrigo", "joao", "joana", "jorge"};
        String[] nomesGrupos = {"dogolachan", "reddit", "phe", "ilha", "vcm"};

        for(int i = 0; i<5; i++){
            String nomeUser = nomesUsers[i];
            int id = i;
            Date data = new Date();
            Usuario user = new Usuario(nomeUser, id, data);
            // foicebook.addUsuario();
        }
    }
}