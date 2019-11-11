package app;
/**
 * Jogo
 */
public class Jogo {
    private String nome;
    private int classificacao;
    private int anoLancamento;
    private Genero genero;

    Jogo(){}

    Jogo(String nome, int clas, int ano, Genero gen){
        this.nome = nome;
        this.anoLancamento = ano;
        this.classificacao = clas;
        this.genero = gen;
    }

    //GETTERS
    /**
     * @return the nome
     */
    public String getNome() {
        return nome;
    }

    /**
     * @return the anoLancamento
     */
    public int getAnoLancamento() {
        return anoLancamento;
    }

    /**
     * @return the classificacao
     */
    public int getClassificacao() {
        return classificacao;
    }
    /**
     * @return the genero
     */
    public Genero getGenero() {
        return genero;
    }

    //SETTERS
    /**
     * @param anoLancamento the anoLancamento to set
     */
    public void setAnoLancamento(int anoLancamento) {
        this.anoLancamento = anoLancamento;
    }
    
    /**
     * @param classificacao the classificacao to set
     */
    public void setClassificacao(int classificacao) {
        this.classificacao = classificacao;
    }
    /**
     * @param nome the nome to set
     */
    public void setNome(String nome) {
        this.nome = nome;
    }
    /**
     * @param genero the genero to set
     */
    public void setGenero(Genero genero) {
        this.genero = genero;
    }

    public void imprimeInfo(){
        System.out.printf("Nome: %s\nClassificação: %d\nAno: %d\nGenero: %s\n", this.nome, this.classificacao, this.anoLancamento, this.genero);
    }
}