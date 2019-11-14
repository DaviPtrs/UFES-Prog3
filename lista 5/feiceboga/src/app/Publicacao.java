package app;

import java.util.Date;

/**
 * Publicacao
 */
public class Publicacao {
    private Date data;
    private String conteudo;
    private Usuario autor;

    Publicacao(){}

    Publicacao(Date data, String conteudo){
        this.data = data;
        this.conteudo = conteudo;
    }

    Publicacao(Date data, String conteudo, Usuario autor){
        this.data = data;
        this.conteudo = conteudo;
        this.autor = autor;
        this.autor.addPost(this);
    }

    /**
     * @return the autor
     */
    public Usuario getAutor() {
        return autor;
    }

    /**
     * @return the conteudo
     */
    public String getConteudo() {
        return conteudo;
    }

    /**
     * @return the data
     */
    public Date getData() {
        return data;
    }

    /**
     * @param conteudo the conteudo to set
     */
    protected void setConteudo(String conteudo) {
        this.conteudo = conteudo;
    }

    /**
     * @param data the data to set
     */
    protected void setData(Date data) {
        this.data = data;
    }

    /**
     * @param autor the autor to set
     */
    public void setAutor(Usuario autor) {
        if(this.autor != null){
            this.autor.detachPost(this);
        }
        this.autor = autor;
        this.autor.addPost(this);
    }
    
    @Override
    public String toString() {
        return "Data: " + this.data + "\n" + this.conteudo;
    }
}