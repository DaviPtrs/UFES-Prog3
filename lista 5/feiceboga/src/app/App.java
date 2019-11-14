package app;

import java.util.Date;

import app.Usuario;

public class App {
    public static void main(String[] args) throws Exception {
        RedeSocial foicebook = new RedeSocial("foicebook");
        String[] nomesUsers = {"davi", "rodrigo", "joao", "joana", "jorge"};
        String[] nomesGrupos = {"dogolachan", "reddit", "phe", "ilha", "vcm"};

        for(int i = 0; i<5; i++){
            String nomeUser = nomesUsers[i];
            String nomeGrupo = nomesGrupos[i];
            int id = i;
            Date data = new Date();
            foicebook.addUsuario(new Usuario(nomeUser, id, data));
        }
    }
}