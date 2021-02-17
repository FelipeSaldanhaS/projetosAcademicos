-- phpMyAdmin SQL Dump
-- version 5.0.3
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Tempo de geração: 27-Jan-2021 às 03:37
-- Versão do servidor: 10.4.14-MariaDB
-- versão do PHP: 7.3.23

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Banco de dados: `bdsapato`
--

-- --------------------------------------------------------

--
-- Estrutura da tabela `tbcliente`
--

CREATE TABLE `tbcliente` (
  `codcliente` int(11) NOT NULL,
  `nome_cliente` varchar(90) NOT NULL,
  `usuario` varchar(64) NOT NULL,
  `senha` varchar(64) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Extraindo dados da tabela `tbcliente`
--

INSERT INTO `tbcliente` (`codcliente`, `nome_cliente`, `usuario`, `senha`) VALUES
(5, 'Jose Oliveira de Souza', 'jose', 'd9b1d7db4cd6e70935368a1efb10e377'),
(6, 'Lima Carla', 'carla', '202cb962ac59075b964b07152d234b70'),
(9, 'Luisa Carrasco', 'luisa', 'd9b1d7db4cd6e70935368a1efb10e377'),
(10, 'Connor Pereira', 'pereira', '202cb962ac59075b964b07152d234b70'),
(11, 'Carlos Mangue', 'mangue', '202cb962ac59075b964b07152d234b70'),
(12, 'Carlos Mangue', 'mangue', '202cb962ac59075b964b07152d234b70'),
(13, 'Carlos Mangue', 'mangue', '202cb962ac59075b964b07152d234b70'),
(14, 'Carlos Mangue', 'mangue', '202cb962ac59075b964b07152d234b70'),
(16, 'Carlos Mangue', 'mangue', '202cb962ac59075b964b07152d234b70'),
(17, 'Carlos Mangue', 'mangue', '202cb962ac59075b964b07152d234b70');

-- --------------------------------------------------------

--
-- Estrutura da tabela `tbfunc`
--

CREATE TABLE `tbfunc` (
  `codfunc` int(11) NOT NULL,
  `nome_funcionario` varchar(90) NOT NULL,
  `usuario` varchar(64) NOT NULL,
  `senha` varchar(64) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Extraindo dados da tabela `tbfunc`
--

INSERT INTO `tbfunc` (`codfunc`, `nome_funcionario`, `usuario`, `senha`) VALUES
(3, 'Felipe Saldanha', 'felipe', 'ec6a6536ca304edf844d1d248a4f08dc'),
(7, 'Paulo Saldanha', 'paulo', '81dc9bdb52d04dc20036dbd8313ed055'),
(9, 'Carlos Mangue', 'mangue', '81dc9bdb52d04dc20036dbd8313ed055'),
(10, 'Luis Saldanha', 'saldanha', '81dc9bdb52d04dc20036dbd8313ed055'),
(11, 'Carlos Manguo', 'mangue', 'ec6a6536ca304edf844d1d248a4f08dc'),
(12, 'Connor Horn', 'horn', '81dc9bdb52d04dc20036dbd8313ed055'),
(13, 'Connor Horn', 'horn', '81dc9bdb52d04dc20036dbd8313ed055'),
(14, 'Connor Horn', 'horn', '81dc9bdb52d04dc20036dbd8313ed055'),
(15, 'Connor Horn', 'horn', '81dc9bdb52d04dc20036dbd8313ed055');

-- --------------------------------------------------------

--
-- Estrutura da tabela `tbproduto`
--

CREATE TABLE `tbproduto` (
  `codprod` int(11) NOT NULL,
  `nome` varchar(90) NOT NULL,
  `descricao` varchar(255) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Extraindo dados da tabela `tbproduto`
--

INSERT INTO `tbproduto` (`codprod`, `nome`, `descricao`) VALUES
(2, 'Tênis Nike Revolution 5 Masculino - Preto e Branco', 'Com ótimo amortecimento em espuma, o Tênis Nike Masculino Revolution 5 é ideal para os corredores que buscam leveza e conforto. Confeccionado em material respirável, esse tênis para correr possui reforço no calcanhar para proteger contra possíveis torções'),
(6, 'Tênis Nike Revolution 5 - Masculino', 'a lateral do tenis ficou meio que raspando no tornozelo direito, nas primeiras corridas, porem esse desconforto desapareceu. Creio que é mais um problema de anatomia do meu pé. e não do fabricante. O tenis se adaptou e amaciou muito bem após o uso, compre'),
(7, 'Tênis Nike Downshifter 10 Masculino', 'O Nike Downshifter 10 traz suporte e amortecimento atualizados. Seu design leve e acolchoado ajuda a manter você se movimentando enquanto corre'),
(8, 'Tênis Nike Zoom Gravity 2 Masculino', 'O Nike Zoom Gravity 2 leva você ao próximo nível. Concebido para corridas de ritmo ou corridas de 5 a 10 km, ele apresenta um design atualizado com detalhes exagerados para um look veloz..'),
(9, 'Tênis Nike Air Zoom Pegasus Fast City Masculino', 'Os tons de neon da capital do Japão à noite inspiram o look do Fast City. Pequenos detalhes prestam homenagem ao sistema de trânsito da cidade. O texto no antepé lembra a fonte encontrada em uma placa de destino do metrô.'),
(10, 'Tênis Nike React Infinity Run Flyknit 2 Feminino', 'Menos material entre a palmilha e a entressola, aproximando o pé da espuma. Isso ajuda a criar uma experiência mais ágil. A espuma é mais alta, proporcionando uma sensação de maciez.');

--
-- Índices para tabelas despejadas
--

--
-- Índices para tabela `tbcliente`
--
ALTER TABLE `tbcliente`
  ADD PRIMARY KEY (`codcliente`);

--
-- Índices para tabela `tbfunc`
--
ALTER TABLE `tbfunc`
  ADD PRIMARY KEY (`codfunc`);

--
-- Índices para tabela `tbproduto`
--
ALTER TABLE `tbproduto`
  ADD PRIMARY KEY (`codprod`);

--
-- AUTO_INCREMENT de tabelas despejadas
--

--
-- AUTO_INCREMENT de tabela `tbcliente`
--
ALTER TABLE `tbcliente`
  MODIFY `codcliente` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=18;

--
-- AUTO_INCREMENT de tabela `tbfunc`
--
ALTER TABLE `tbfunc`
  MODIFY `codfunc` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=16;

--
-- AUTO_INCREMENT de tabela `tbproduto`
--
ALTER TABLE `tbproduto`
  MODIFY `codprod` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=11;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
