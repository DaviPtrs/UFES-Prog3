package app;

import java.util.ArrayList;

/**
 * RedeSocial
 */
public class RedeSocial {
    private String nome;
    ArrayList<Usuario> usuarios;
    ArrayList<Grupo> grupos;

    RedeSocial(){}

    RedeSocial(String nome){
        this.nome = nome;
    }

    /**
     * @param nome the nome to set
     */
    public void setNome(String nome) {
        this.nome = nome;
    }

    /**
     * @return the nome
     */
    public String getNome() {
        return nome;
    }

    public void addGrupo(Grupo g){
        grupos.add(g);
    }

    public void rmGrupo(Grupo g){
        grupos.remove(g);
		g = null;
	    System.gc();
    }

    public void addUsuario(Usuario u){
        usuarios.add(u);
    }

    public void rmUsuario(Usuario u){
        usuarios.remove(u);
		u = null;
	    System.gc();
    }
}		