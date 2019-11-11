package app;

import java.util.Date;

/**
 * Publicacao
 */
public class Publicacao {
    private Date data;
    private String conteudo;
    Publicacao(){}
    Publicacao(Date data, String conteudo){
        this.data = data;
        this.conteudo = conteudo;
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
    
    @Override
    public String toString() {
        // TODO Auto-generated method stub
        return "Data: " + this.data + "\n" + this.conteudo;
    }
}