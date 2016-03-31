# Projeto 1 - Parte 3

## Introdução

Neste projeto temos como objetivo avaliar os dados obtidos durante a parte anterior de modo a comparar o desempenho dos diversos computadores, além de descobrir e discutir possíveis discrepâncias entre os dados.

Fazendo uma rápida recapitulação: na parte anterior cada grupo realizou medidas de desempenho, utilizando diferentes computadores, de alguns entre os 8 benchmarks selecionados pela turma. Ao final obtivemos medidas de um total de 31 máquinas e todos estes dados foram compartilhados entre toda a turma na seguinte [planilha](https://docs.google.com/spreadsheets/d/1c9JP7p0yYadZqwHrJEReNS8knAeSaMRDabaCDr-fwjg/edit).

## Configurações das Máquinas Utilizadas

De modo geral todos os benchmarks escolhidos avaliaram de alguma forma o desempenho do processador da máquina testada. Dessa forma, para facilitar a análise dos dados, eu separei as configurações das várias máquinas e as ordenei pelo tipo de processador. Ao topo ficaram os modelos mais novos e considerados "melhores" e ao final as que teoricamente teriam um desempenho pior. 
É importante notar que esta é uma ordenação grosseira já que processadores mais novos não necessariamente são significado de um desempenho melhor e mais: o desempemho de um benchmark pode depender de vários fatores além do processador, até por que ele pode estar avaliando algum outra configuração da máquina (como no caso do benchmark Genetic em que a performance do disco é analisada).

|                       | Processador                                      | Main Memory      | Hard Disk                                    |
|-----------------------|--------------------------------------------------|------------------|----------------------------------------------|
| Rafael Faria          | i7-4750HQ 2.00GHz                                | 8GB 1600Mhz DDR3 |                                              |
| Renan Gomes           | i7-4702MQ 2.20GHz 64bits                         | 8GB              |                                              |
| Matheus Figueiredo    | i7-4700HQ 2.4GHz                                 | 16GB DDR3        | HDD 5400 RPM                                 |
| João Fidélis          | i7-4700HQ 2.4GHz                                 | 16GB DDR3        | WD10S21X-24R1BTO / 7200RPM / Sata III        |
| João Paulo            | i7-4510U 2.00GHz                                 | 16GB DDR3        |                                              |
| Gabriel Bueno         | i7-4510U 2.00GHz                                 | 8GB DDR3         | HD SATA 5400rpm                              |
| Renan Castro          | i7-37400QM 2.70GHz                               | VIRTUAL MACHINE  |                                              |
| Gabriel Magalhães     | i7-3612QM 2.10GHz                                | 8GB DDR3         | SSD Kingston 240GB V300 Sata III             |
| Klaus Rollman         | i7-3610QM 2.30GHz                                |                  |                                              |
| debios                | i7-3612QM 2.10GHz                                | 8GB              | SSD 32GB, HDD1TB (5400rpm)                   |
| Pedro Grijó           | i7-2670QM 2.20GHz                                | 8GB DDR 1333Mhz  | HDD: SAMSUNG HN-M101MBB / 5400 RPM/ Sata III |
| Titouan Thibaud       | i7-2630QM 2.00Ghz                                | 4GB              |                                              |
| Gustavo Basso         | i7 2.3GHz                                        | 8GB DDR3 1600Mhz |                                              |
| Cygnus X-1            | i7                                               | 8GB              |                                              |
| Wendrey               | i5-5200 2.20GHz                                  | 8GB DDR3         | 1TB WDC WD10JPVX-22J                         |
| Pedro Meireles        | i5-4590 3.30Ghz                                  | 8GB              |                                              |
| Titouan Thibaud       | i5-4590 3.30Ghz                                  | 8GB              |                                              |
| Matheus Pinheiro      | i5-4200U 1.60GHz                                 | 4GB              |                                              |
| Rodrigo Silva         | i5-2450 2.5GHz                                   | 6GB              |                                              |
| Mateus Ruivo          | i3-3110M 2.40GHz                                 | 4GB DDR3         | 54000rpm SATA                                |
| Bruno Hori - Mamonas  | 2 Quad Q8400 2.66GHz                             |                  |                                              |
| IC-legiao             | 2 Quad Q8400 2.66GHz                             |                  |                                              |
| Victor Souza          | 2 Quad Q8400 2.66Ghz                             | 4GB              |                                              |
| IC301-Titan           | 2 Quad Q8400 2.66Ghz                             | 4GB              |                                              |
| floyd                 | 2 Quad Q8400 2.66Ghz                             | 4GB              |                                              |
| IC-sepultura          | 2 Quad Q8400 2.66Ghz                             | 4GB              |                                              |
| Luiz Sekijima         | Core 2 Dui T6500 2.10GHz                         | 2,4GB            |                                              |
| Netbook - Felipe Emos | Itel Atom                                        |                  |                                              |
| yk0 - Yugo Kuno       | AMD Phenonll                                     | 10GB             |                                              |
| Pedro Vasconcellos    | Raspberry Pi, 900MHz quad-core ARM Cortex-A7 CPU | 1GB RAM          | 32GB SD Card                                 |


## Benchmarks Selecionados


