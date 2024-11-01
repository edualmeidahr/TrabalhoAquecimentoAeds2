#ifndef TFIDF_HPP
#define TFIDF_HPP

#include <iostream>
#include <fstream>
#include <vector>
#include <cctype>
#include <string>
#include <filesystem> // Necessário para manipulação de diretórios
#include <unordered_set>
#include <unordered_map>
#include <set>
#include <cmath>

std::string NomeLivro(int numero);

const std::unordered_set<std::string> stopwords;

double calcularRelevancia(const std::unordered_map<std::string, int> &tf,
                          const std::unordered_map<std::string, double> &idf,
                          const std::vector<std::string> &frasePesquisa);

std::string removePontuacaoPadronizaMinuscula(const std::string &linhaLivro);

void lerStopWords(const std::string &nomeArquivo);

std::string removerStopWords(const std::string &linhaLivro);

std::vector<std::string> lerLivro(const std::string &nomeArquivo);

std::unordered_map<std::string, int> processarDocumento(const std::vector<std::string> &termosDocumento);

std::unordered_map<std::string, double> calcularIDF(
    const std::vector<std::unordered_map<std::string, int> > &documentos);

void salvarLivroProcessado(const std::vector<std::string> &livro, const std::string &nomeArquivoSaida);


#endif // TFIDF_HPP
