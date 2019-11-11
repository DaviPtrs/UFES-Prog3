package app;

import java.sql.Date;
import java.util.ArrayList;

/**
 * Usuario
 */
public class Usuario {
    protected String nome;
    protected String id;
    protected Date data;
    public static int qtdUsuarios;
    ArrayList<Publicacao> posts;
    ArrayList<Usuario> seguidores;

    Usuario(){}

    /**
     * @param data the data to set
     */
    public void setData(Date data) {
        this.data = data;
    }

    /**
     * @param id the id to set
     */
    public void setId(String id) {
        this.id = id;
    }

    /**
     * @param nome the nome to set
     */
    public void setNome(String nome) {
        this.nome = nome;
    }
    /**
     * @param qtdUsuarios the qtdUsuarios to set
     */
    public static void setQtdUsuarios(int qtdUsuarios) {
        Usuario.qtdUsuarios = qtdUsuarios;
    }
    /**
     * @return the data
     */
    public Date getData() {
        return data;
    }
    /**
     * @return the id
     */
    public String getId() {
        return id;
    }
    /**
     * @return the nome
     */
    public String getNome() {
        return nome;
    }
    /**
     * @return the qtdUsuarios
     */
    public static int getQtdUsuarios() {
        return qtdUsuarios;
    }
}