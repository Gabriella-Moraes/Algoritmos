Algoritmo "votacao"

// Aluno 1: Ana Caroline Ferreira Rodrigues
// Aluno 2: Bruno BodÃª do Nascimento
// Aluno 3: Gabriella de Moraes
// Aluno 4: Gustavo do Carmo Vito

//  TURMA: DSM (ALP) - 2S21
//  Profa.: Eliane Oliveira Santiago

Var
   zona, total_eleitores, urna, falta, N_eleitor: inteiro
   prefeito, vereador, votar: caracter
   p1, p2, p3, p4, pb, pn, somaPDB, somaPSB, somap, ocp, ocv: inteiro
   v1,v2,v3,v4,vb,vn, somav, aux: inteiro
   validaprefeito, validavereador: logico


Inicio

   validaprefeito <- falso
   validavereador<-falso
   N_eleitor <- 1

   escreval("Identificação da Seção e Zona Eleitoral......:")
   leia(zona)
   escreval("Total dos Eleitores que podem votar..........:")
   leia(total_eleitores)
   escreval("Código de Identificação da Urna Eletrônica...:")
   leia(urna)

   repita
      escreval("")
      escreval("Olá eleitor, nº", N_eleitor)
      escreval(" ")
      escreval("-------------------------------------------------")
      escreval("               Candidato a Prefeito              ")
      escreval("-------------------------------------------------")
      escreval("    Partido    |     Candidato    |     Sigla    ")
      escreval("-------------------------------------------------")
      escreval("     PDB       |    Candidato 1   |      C1      ")
      escreval("     PDB       |    Candidato 2   |      C2      ")
      escreval("     PSB       |    Candidato 3   |      C3      ")
      escreval("     PSB       |    Candidato 4   |      C4      ")
      escreval("     ---       |      Branco      |      VB      ")
      escreval("     ---       |       Nulo       |      VN      ")
      escreval("Escolha o candidato a prefeito: ")
      leia(prefeito)
      se(prefeito="C1") ou (prefeito="C2") ou (prefeito="C3") ou (prefeito="C4") ou (prefeito="CB") ou (prefeito="CN")entao
         validaprefeito<-verdadeiro
         escolha (prefeito)
         caso "C1"
            p1<-p1+1
         caso "C2"
            p2<-p2+1
         caso "C3"
            p3<-p3+1
         caso "C4"
            p4<-p4+1
         caso "CB"
            pb<-pb+1
         caso "VN"
            pn<-pn+1
         fimescolha
      senao
         ocp<-pn+1
      fimse

      escreval("")
      escreval("-------------------------------------------------")
      escreval("               Candidato a Vereador              ")
      escreval("-------------------------------------------------")
      escreval("    Partido    |     Candidato    |     Sigla    ")
      escreval("-------------------------------------------------")
      escreval("     PDB       |    Candidato 1   |      V1      ")
      escreval("     PDB       |    Candidato 2   |      V2      ")
      escreval("     PSB       |    Candidato 3   |      V3      ")
      escreval("     PSB       |    Candidato 4   |      V4      ")
      escreval("     ---       |      Branco      |      VB      ")
      escreval("     ---       |       Nulo       |      VN      ")
      escreval("-------------------------------------------------")
      leia(vereador)
      se(vereador="V1") ou (vereador="V2") ou (vereador="V3") ou (vereador="V4") ou (vereador="VB") ou (vereador="VN")entao
         validavereador<-verdadeiro
         escolha (vereador)
         caso "V1"
            v1<-v1+1
         caso "V2"
            v2<-v2+1
         caso "V3"
            v3<-v3+1
         caso "V4"
            v4<-v4+1
         caso "VB"
            vb<-vb+1
         caso "VN"
            vn<-vn+1
         fimescolha
      senao
         ocv<-vn+1
      fimse
      aux <- N_eleitor
      se N_eleitor < total_eleitores entao
         escreval("Tem mais alguem para votar? [S ou N]")
         leia(votar)
         se ((votar = "s") ou (votar = "S"))entao
            N_eleitor <- N_eleitor + 1
         senao
            aux <- total_eleitores
         fimse
      fimse
      limpatela
   ate (aux = total_eleitores)


   escreval("Votação encerrada")
   escreval("")
   escreval("Resultado da votação:")
   escreval("")
   escreval("Identificação da Seção e Zona Eleitoral......: ", zona)
   escreval("Total dos Eleitores que podem votar..........: ", total_eleitores)
   escreval("Total de eleitores que votaram...............: ", N_eleitor)
   falta <- total_eleitores - N_eleitor
   escreval("Total de eleitores que faltaram:.............: ", falta)
   escreval("Código de identificação da urna eletrônica...: ", urna)
   escreval("Total de votos em branco e nulos, agrupados por cargo:")
   somap <- pb + pn + ocp
   escreval("Branco e nulo Prefeito: ", somap)
   somav <- vb + vn + ocv
   escreval("Branco e nulo em Vereador: ", somav)

   somaPDB <-  p1 + p2 + v1 + v2
   escreval("Número de votos para o Partido PDB: " , somaPDB)
   somaPSB <-  p3 + p4 + v3 + v4
   escreval("Número de votos para o Partido PSB: " , somaPSB)

   escreval(" ")
   escreval("-------------------------------------------------")
   escreval("               Candidato a Prefeito              ")
   escreval("-------------------------------------------------")
   escreval("Cadidatos 1 = ", p1)
   escreval("Cadidatos 2 = ", p2)
   escreval("Cadidatos 3 = ", p3)
   escreval("Cadidatos 4 = ", p4)
   escreval("Votos Brancos = ", pb)
   escreval("Votos Nulos = ", pn+ocp)
   escreval("")

   escreval("-------------------------------------------------")
   escreval("               Candidato a Vereador              ")
   escreval("-------------------------------------------------")
   escreval("Cadidatos 1 = ", v1)
   escreval("Cadidatos 2 = ", v2)
   escreval("Cadidatos 3 = ", v3)
   escreval("Cadidatos 4 = ", v4)
   escreval("Votos Brancos = ", vb)
   escreval("Votos Nulos = ", vn+ocv)
   escreval("")


   se((p1 > p2) e (p1 > p3) e (p1 > p4))entao
      escreval("Candidato 1 a prefeito ganhou!")
   senao
      se ((p2 > p1) e (p2 > p3) e (p2 > p4))entao
         escreval("Candidato 2 a prefeito ganhou!")
      senao
         se ((p3 > p1) e (p3 > p2) e (p3 > p4))entao
            escreval("Candidato 3 a prefeito ganhou!")
         senao
            se((p4 > p1) e (p4 > p2) e (p4 > p3))entao
               escreval("Candidato 4 a prefeito ganhou!")
            senao
               escreval("Não houve ganhadores!")
            fimse
         fimse
      fimse
   fimse

   se((v1 > v2) e (v1 > v3) e (V1 > V4))entao
      escreval("Candidato 1 a vereador ganhou!")
   senao
      se ((v2 > v1) e (v2 > v3) e (v2 > v4))entao
         escreval("Candidato 2 a vereador ganhou!")
      senao
         se ((v3 > v1) e (v3 > v2) e (v3 > v4))entao
            escreval("Candidato 3 a vereador ganhou!")
         senao
            se((v4 > v1) e (v4 > v2) e (v4 > v3))entao
               escreval("Candidato 4 a vereador ganhou!")
            senao
               escreval("Não houve ganhadores!")
            fimse
         fimse
      fimse
   fimse

fimalgoritmo
