package app;

import java.util.ArrayList;

/**
 * Grupo
 */
public class Grupo {
    private String nome;
    private int idadeMinUsuarioAnos;
    private int idadeMinPaginaDias;
    Categoria categoria;
    Usuario admin;
    ArrayList<Usuario> participantes;

    Grupo(){}
    Grupo(String nome, Categoria categoria, Usuario admin){
        this.nome = nome;
        this.categoria = categoria;
        this.admin = admin;
    }

    /**
     * @param p participante a ser adicionado
     */
    public void addParticipante(Usuario p){
        this.participantes.add(p);
    }
    /**
     * @param p participante a ser removido
     */
    public void rmParticipante(Usuario p){
        this.participantes.remove(p);
    }
    /**
     * @param admin the admin to set
     */
    public void setAdmin(Usuario admin) {
        this.admin = admin;
    }
    /**
     * @param categoria the categoria to set
     */
    public void setCategoria(Categoria categoria) {
        if(this.categoria != null){
            this.categoria.rmGrupo(this);
        }
        this.categoria = categoria;
        this.categoria.addGrupo(this);
    }
    /**
     * @param idadeMinPaginaDias the idadeMinPaginaDias to set
     */
    public void setIdadeMinPaginaDias(int idadeMinPaginaDias) {
        this.idadeMinPaginaDias = idadeMinPaginaDias;
    }
    /**
     * @param idadeMinUsuarioAnos the idadeMinUsuarioAnos to set
     */
    public void setIdadeMinUsuarioAnos(int idadeMinUsuarioAnos) {
        this.idadeMinUsuarioAnos = idadeMinUsuarioAnos;
    }
    /**
     * @param nome the nome to set
     */
    public void setNome(String nome) {
        this.nome = nome;
    }
    /**
     * @return the idadeMinPaginaDias
     */
    public int getIdadeMinPaginaDias() {
        return idadeMinPaginaDias;
    }
    /**
     * @return the idadeMinUsuarioAnos
     */
    public int getIdadeMinUsuarioAnos() {
        return idadeMinUsuarioAnos;
    }
    /**
     * @return the nome
     */
    public String getNome() {
        return nome;
    }
    /**
     * @return the categoria
     */
    public Categoria getCategoria() {
        return categoria;
    }
    /**
     * @return the admin
     */
    public Usuario getAdmin() {
        return admin;
    }
    /**
     * @return the participantes
     */
    public ArrayList<Usuario> getParticipantes() {
        return participantes;
    }
}