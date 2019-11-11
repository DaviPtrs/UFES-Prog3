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
}