package app;

import java.sql.Date;
import java.util.ArrayList;

/**
 * Usuario
 */
public class Usuario {
    protected String nome;
    protected int id;
    protected Date data;
    protected ArrayList<Publicacao> posts;
    protected ArrayList<Usuario> seguidores;
    protected ArrayList<Grupo> grupos;
    public static int qtdUsuarios;

    public Usuario(){
        qtdUsuarios++;
    }

    public Usuario(String nome, int id, Date data){
        this.nome = nome;
        this.id = id;
        this.data = data;
        qtdUsuarios++;
    }

    /**
     * @param data the data to set
     */
    public void setData(Date data) {
        this.data = data;
    }

    /**
     * @param id the id to set
     */
    public void setId(int id) {
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
    public int getId() {
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

    public void addGrupo(Grupo g){
        g.addParticipante(this);
        this.grupos.add(g);
    }

    public void unAddGrupo(Grupo g){
        g.rmParticipante(this);
        this.grupos.remove(g);
    }
    
    public void addPost(Publicacao p){
        this.posts.add(p);
    }

    public void detachPost(Publicacao p){
        this.posts.remove(p);
    }
}