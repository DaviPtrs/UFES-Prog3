package app;

import java.util.ArrayList;

/**
 * Categoria
 */
public class Categoria {
    ArrayList<Grupo> grupos;
    private String nome;

    Categoria(){}

    Categoria(String nome){
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

    /**
     * @return the grupos
     */
    public ArrayList<Grupo> getGrupos() {
        return grupos;
    }

    /**
     * @param grupo to be added on Categoria
     */
    public void addGrupo(Grupo g) {
        grupos.add(g);
    }

    /**
     * @param grupo to be removed from Categoria
     */
    public void rmGrupo(Grupo g) {
        grupos.remove(g);
    }
}