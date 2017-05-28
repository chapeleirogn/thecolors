/*
Navicat MySQL Data Transfer

Source Server         : localhost_3306
Source Server Version : 50505
Source Host           : localhost:3306
Source Database       : thecolors

Target Server Type    : MYSQL
Target Server Version : 50505
File Encoding         : 65001

Date: 2017-05-28 16:26:02
*/

SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for `alegria`
-- ----------------------------
DROP TABLE IF EXISTS `alegria`;
CREATE TABLE `alegria` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `frase` varchar(500) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=32 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of alegria
-- ----------------------------
INSERT INTO `alegria` VALUES ('1', 'Sorria! Deus acaba de te dar um novo dia e coisas extraordinárias podem acontecer se você crer!');
INSERT INTO `alegria` VALUES ('2', 'A vida me ensinou que chorar alivia, mas sorrir torna tudo mais bonito.');
INSERT INTO `alegria` VALUES ('3', 'Ser feliz não é viver apenas momentos de alegria. É ter coragem de enfrentar os momentos de tristeza e sabedoria para transformar os problemas em aprendizado.');
INSERT INTO `alegria` VALUES ('4', 'Chique é ser feliz. Elegante é ser honesto. Bonito é ser caridoso. Sábio é saber ser grato. O resto é inversão de valores.');
INSERT INTO `alegria` VALUES ('5', 'Que o desânimo e a tristeza sejam sempre vencidos pela vontade e fé que habitam em nós.');
INSERT INTO `alegria` VALUES ('6', 'Dê um \"Play\" na vida, um \"Pause\" nos momentos bons, um \"Stop\" nos momentos ruins e um \"Repeat\" nas alegrias da vida');
INSERT INTO `alegria` VALUES ('7', 'Melhor que rir, é rir com alguém ao seu lado. Sorriso dividido é sorriso dobrado.');
INSERT INTO `alegria` VALUES ('8', 'Simplesmente viva a vida!');
INSERT INTO `alegria` VALUES ('9', 'Completem a minha alegria, tendo o mesmo modo de pensar, o mesmo amor, um só espírito e uma só atitude. (Filipenses 2:2)');
INSERT INTO `alegria` VALUES ('10', 'Faça mais do que te faz feliz.');
INSERT INTO `alegria` VALUES ('11', 'Faça a tristeza de confete, joga pro alto e deixa o vento levar.');
INSERT INTO `alegria` VALUES ('12', 'O seu sorriso pode mudar o dia de alguém.');
INSERT INTO `alegria` VALUES ('13', 'Não fique esperando o futuro para ser feliz, faça do presente a sua alegria.');
INSERT INTO `alegria` VALUES ('14', 'Aprendi a sorrir, porque chorar eu já nasci sabendo.');
INSERT INTO `alegria` VALUES ('15', 'Faça a dieta da alegria: um sorriso a cada manhã e um agradecimento ao final do dia.');
INSERT INTO `alegria` VALUES ('16', 'Seja feliz. Não aceite menos que isso.');
INSERT INTO `alegria` VALUES ('17', 'O sorriso é o arco-íris do rosto.');
INSERT INTO `alegria` VALUES ('18', 'A alegria é contagiante. Passe adiante.');
INSERT INTO `alegria` VALUES ('19', 'Ser feliz sem motivo é a mais autêntica forma de felicidade.');
INSERT INTO `alegria` VALUES ('20', 'Bonito é ser o motivo do sorriso de alguém.');
INSERT INTO `alegria` VALUES ('21', 'Não perca as pequenas alegrias esperando pela grande felicidade.');
INSERT INTO `alegria` VALUES ('22', 'Deixe um sinal de alegria por onde você passar.');
INSERT INTO `alegria` VALUES ('23', 'A alegria evita mil males e prolonga a vida.');
INSERT INTO `alegria` VALUES ('24', 'Um dia sem rir é um dia desperdiçado.');
INSERT INTO `alegria` VALUES ('25', 'Que a vida seja livre, a risada sem culpa e o amor sem medo!');
INSERT INTO `alegria` VALUES ('26', 'Sonhe muito, ria alto... A ordem dos fatores não altera a felicidade.');
INSERT INTO `alegria` VALUES ('27', 'Aqui até a tristeza pula de alegria.');
INSERT INTO `alegria` VALUES ('28', 'A felicidade tem amnésia. É preciso lembrá-la todo dia que você existe.');
INSERT INTO `alegria` VALUES ('29', 'Sorria, você foi feito para isso.');
INSERT INTO `alegria` VALUES ('30', 'Não existe remédio melhor do que a alegria.');
INSERT INTO `alegria` VALUES ('31', '');

-- ----------------------------
-- Table structure for `ansioso`
-- ----------------------------
DROP TABLE IF EXISTS `ansioso`;
CREATE TABLE `ansioso` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `frase` varchar(500) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=24 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of ansioso
-- ----------------------------
INSERT INTO `ansioso` VALUES ('1', 'Um pedaço de pão comido em paz é melhor do que um banquete comido com ansiedade.');
INSERT INTO `ansioso` VALUES ('2', 'A ansiedade e o medo envenenam o corpo e o espírito.');
INSERT INTO `ansioso` VALUES ('3', 'Nada é tão lamentável e nocivo como antecipar desgraças.');
INSERT INTO `ansioso` VALUES ('4', 'Amor é quando a paixão não tem outro compromisso marcado. Ansiedade é quando sempre faltam muitos minutos para o que quer que seja.');
INSERT INTO `ansioso` VALUES ('5', 'Precisamos ser pacientes, mas não ao ponto de perder o desejo. devemos ser ansiosos, mas não ao ponto de não sabermos esperar.');
INSERT INTO `ansioso` VALUES ('6', 'O homem, na sua ansiedade de refutar a evidência de que é um macaco, reforça a crença de que é um burro.');
INSERT INTO `ansioso` VALUES ('7', 'Obrigado por tolerar minha ansiedade, compreender minhas loucuras e ter me amado com todos os meus defeitos.');
INSERT INTO `ansioso` VALUES ('8', 'Você sabe que chegou ao cúmulo da ansiedade quando fica ansiosa até pra ansiedade passar.');
INSERT INTO `ansioso` VALUES ('9', 'Qual garota nunca comeu uma barra de chocolate por ansiedade. Uma alface por vaidade...E um beijo em um canalha por saudades!');
INSERT INTO `ansioso` VALUES ('10', 'Ansiedade é a diferença entre o tempo do querer de Deus e o tempo do nosso próprio querer.');
INSERT INTO `ansioso` VALUES ('11', 'A ansiedade faz toda esperança parecer angustiante');
INSERT INTO `ansioso` VALUES ('12', 'Depressão é excesso de passado em nossas mentes. Ansiedade excesso de futuro. O momento presente é a chave para a cura de todos oa males mentais.');
INSERT INTO `ansioso` VALUES ('13', 'A ansiedade é o resultado natural de centralizarmos nossas esperanças em qualquer coisa menor do que Deus e Sua vontade para nós');
INSERT INTO `ansioso` VALUES ('14', 'Ame apesar de tudo: do medo, da ansiedade, da angústia, da incerteza, do passado, do futuro e do presente. Ame apesar dos outros e de você mesmo!');
INSERT INTO `ansioso` VALUES ('15', 'A ansiedade sobre a passagem do tempo nos faz falar sobre o tempo.');
INSERT INTO `ansioso` VALUES ('16', 'Ansiedade mesmo e ter medo do por do sol,o medo de não poder velo todos o dias!');
INSERT INTO `ansioso` VALUES ('17', 'Ansiedade mesmo e ter medo das escolhas que você faz em um sonho!');
INSERT INTO `ansioso` VALUES ('18', 'O que você não faz em 2 anos pode fazer em 18 anos, essa frase é sobre determinação!');
INSERT INTO `ansioso` VALUES ('19', 'O verdadeiro querer não sofre de ansiedade, pois sabe que a vida responde na hora certa.');
INSERT INTO `ansioso` VALUES ('20', 'Você sabe quando o amor vai aparecer na sua vida? Quando você parar com essa ansiedade.');
INSERT INTO `ansioso` VALUES ('21', 'Mas sem ansiedade: o tempo que temos, se estamos atentos, será sempre exato.');
INSERT INTO `ansioso` VALUES ('22', 'Ansiedade é apenas insegurança.');
INSERT INTO `ansioso` VALUES ('23', 'Já não me importa o tempo perdido, eu sinto uma ansiedade imensa de mergulhar no que ainda não vivi.');

-- ----------------------------
-- Table structure for `cansado`
-- ----------------------------
DROP TABLE IF EXISTS `cansado`;
CREATE TABLE `cansado` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `frase` varchar(500) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=26 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of cansado
-- ----------------------------
INSERT INTO `cansado` VALUES ('1', 'Que minha coragem seja maior que meu medo e que minha força seja tão grande quanto minha fé.');
INSERT INTO `cansado` VALUES ('2', 'Não importa o que você decidiu. O que importa é que isso te faça feliz.');
INSERT INTO `cansado` VALUES ('3', 'Se a vida não ficar mais fácil, trate de ficar mais forte.');
INSERT INTO `cansado` VALUES ('4', 'Vá firme na direção das suas metas. Porque o pensamento cria, o desejo atrai e a fé realiza.');
INSERT INTO `cansado` VALUES ('5', 'Toda conquista começa com a decisão de tentar.');
INSERT INTO `cansado` VALUES ('6', 'A dor faz você mais forte, o medo faz você mais corajoso e a paciência faz você mais sábio.');
INSERT INTO `cansado` VALUES ('7', 'Se você acredita que é capaz, ignore a opinião dos outros e siga em frente. Nem sempre é bom saber o que outros pensam.');
INSERT INTO `cansado` VALUES ('8', 'Se eu não mudar o que faço hoje, todos os amanhãs serão iguais a ontem.');
INSERT INTO `cansado` VALUES ('9', 'Vai. E se der medo, vai com medo mesmo.');
INSERT INTO `cansado` VALUES ('10', 'Você é mais forte do que imagina. Acredite.');
INSERT INTO `cansado` VALUES ('11', 'Eu ainda não cheguei lá, mas estou mais perto do que ontem.');
INSERT INTO `cansado` VALUES ('12', 'Se você não está feliz com algo, mexa-se. Você não é uma árvore.');
INSERT INTO `cansado` VALUES ('13', 'Nunca deixe de lutar por medo de errar ou de se machucar. As feridas com o tempo se curam, mas as oportunidades não voltam.');
INSERT INTO `cansado` VALUES ('14', 'Você não é derrotado quando perde. Você é derrotado quando desiste.');
INSERT INTO `cansado` VALUES ('15', 'Arrisque, tente, permita-se, mostre para si mesmo do que é capaz.');
INSERT INTO `cansado` VALUES ('16', 'Você terá que aprender que a vida só dá asas a quem não tem medo de cair.');
INSERT INTO `cansado` VALUES ('17', 'Pare de esperar as coisas acontecerem. Vá lá e faça com que aconteçam.');
INSERT INTO `cansado` VALUES ('18', 'Correr riscos é melhor do que passar o resto da vida arrependido por não ter tentado.');
INSERT INTO `cansado` VALUES ('19', 'Substitua o medo de perder pela vontade de ganhar!');
INSERT INTO `cansado` VALUES ('20', 'Acredite em você!');
INSERT INTO `cansado` VALUES ('21', 'Eu não sei como, mas vou chegar lá em breve.');
INSERT INTO `cansado` VALUES ('22', 'Tudo o que você quer está do outro lado do medo.');
INSERT INTO `cansado` VALUES ('23', 'Não deixe seus medos decidirem por você.');
INSERT INTO `cansado` VALUES ('24', 'Todos os dias faça algo que o deixe mais próximo de um futuro melhor.');
INSERT INTO `cansado` VALUES ('25', 'A vida começa onde termina a sua zona de conforto.');

-- ----------------------------
-- Table structure for `confiante`
-- ----------------------------
DROP TABLE IF EXISTS `confiante`;
CREATE TABLE `confiante` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `frase` varchar(500) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=32 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of confiante
-- ----------------------------
INSERT INTO `confiante` VALUES ('1', 'Acredite em si próprio e chegará um dia em que os outros não terão outra escolha senão acreditar com você.');
INSERT INTO `confiante` VALUES ('2', 'Coisas na vida que não se deve quebrar: confiança, promessa e um coração');
INSERT INTO `confiante` VALUES ('3', 'Confiança é como papel: uma vez amassado, nunca mais volta a ser perfeito como antes.');
INSERT INTO `confiante` VALUES ('4', 'Não desista! Geralmente é a última chave no chaveiro que abre a porta.');
INSERT INTO `confiante` VALUES ('5', 'Há muitas razões para duvidar e uma só para crer.');
INSERT INTO `confiante` VALUES ('6', 'Eu não confio facilmente. Portanto, se eu disser que eu confio em você, não faça eu me arrepender.');
INSERT INTO `confiante` VALUES ('7', 'A confiança é uma mulher ingrata, que te beija, te abraça, te rouba e te mata.');
INSERT INTO `confiante` VALUES ('8', 'Confiança é a base de tudo!');
INSERT INTO `confiante` VALUES ('9', 'A confiança que temos em nós mesmos, reflete-se em grande parte na confiança que temos nos outros');
INSERT INTO `confiante` VALUES ('10', 'A maior prova de amor é a confiança.');
INSERT INTO `confiante` VALUES ('11', 'A confiança é um ato de fé, e esta dispensa raciocínio.');
INSERT INTO `confiante` VALUES ('12', 'Confiança para tentar, fé para fortalecer.');
INSERT INTO `confiante` VALUES ('13', 'Desculpas aceitas, confiança negada.');
INSERT INTO `confiante` VALUES ('14', 'A amizade sem confiança é uma flor sem perfume.');
INSERT INTO `confiante` VALUES ('15', 'A confiança é contagiante. A falta dela também.');
INSERT INTO `confiante` VALUES ('16', 'Eu nunca fui perfeito, mas sempre fui verdadeiro.');
INSERT INTO `confiante` VALUES ('17', 'Quanto mais conheço minha força, menos temo os obstáculos da vida!');
INSERT INTO `confiante` VALUES ('18', 'Não tem como andar de mãos dadas com um pé atrás.');
INSERT INTO `confiante` VALUES ('19', 'Confiança: anos para ganhar, segundos para perder.');
INSERT INTO `confiante` VALUES ('20', 'Otimismo é esperar pelo melhor. Confiança é saber lidar com o pior.');
INSERT INTO `confiante` VALUES ('21', 'Confiança é igual borracha. Fica menor a cada erro cometido.');
INSERT INTO `confiante` VALUES ('22', 'A confiança em si próprio é o primeiro segredo do êxito.');
INSERT INTO `confiante` VALUES ('23', 'Aquele que não tem confiança nos outros, não lhes pode ganhar a confiança.');
INSERT INTO `confiante` VALUES ('24', 'Acredite, tenha fé, confie. Deus não decepciona!');
INSERT INTO `confiante` VALUES ('25', 'Quando você quebra uma promessa, destrói também toda a confiança que depositaram em você.');
INSERT INTO `confiante` VALUES ('26', 'Aprenda: confiança não tem sete vidas!');
INSERT INTO `confiante` VALUES ('27', 'A maior necessidade deste mundo é de confiança e amor.');
INSERT INTO `confiante` VALUES ('28', 'Com atitude certa e uma boa dose de confiança qualquer sonho será alcançado.');
INSERT INTO `confiante` VALUES ('29', 'A confiança é algo que devemos entregar a poucos na vida.');
INSERT INTO `confiante` VALUES ('30', 'Quando há confiança, nenhuma prova é necessária.');
INSERT INTO `confiante` VALUES ('31', '');

-- ----------------------------
-- Table structure for `deprimido`
-- ----------------------------
DROP TABLE IF EXISTS `deprimido`;
CREATE TABLE `deprimido` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `frase` varchar(500) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=17 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of deprimido
-- ----------------------------
INSERT INTO `deprimido` VALUES ('1', 'Distribua sorrisos, amor e palavras de ânimo. Tudo isso voltará para você!');
INSERT INTO `deprimido` VALUES ('2', 'Que o desânimo e a tristeza sejam sempre vencidos pela vontade e fé que habitam em nós.');
INSERT INTO `deprimido` VALUES ('3', 'Sempre que chega este dia eu sinto meu coração aos pulos e meu ânimo subindo. Boa sexta-feira!');
INSERT INTO `deprimido` VALUES ('4', 'O seu sorriso pode mudar o dia de alguém.');
INSERT INTO `deprimido` VALUES ('5', 'Faça a tristeza de confete, joga pro alto e deixa o vento levar.');
INSERT INTO `deprimido` VALUES ('6', 'Não fique esperando o futuro para ser feliz, faça do presente a sua alegria.');
INSERT INTO `deprimido` VALUES ('7', 'Seja feliz. Não aceite menos que isso.');
INSERT INTO `deprimido` VALUES ('8', 'Deixe um sinal de alegria por onde você passar.');
INSERT INTO `deprimido` VALUES ('9', 'A alegria evita mil males e prolonga a vida.');
INSERT INTO `deprimido` VALUES ('10', 'Em vez de reclamar da vida, levante a cabeça, sacuda a poeira e dê a volta por cima. Afinal, dias ruins são necessários para que os bons valham a pena!');
INSERT INTO `deprimido` VALUES ('11', 'Não existe um caminho para a felicidade. A felicidade é o caminho.');
INSERT INTO `deprimido` VALUES ('12', 'Acredite em si próprio e chegará um dia em que os outros não terão outra escolha senão acreditar com você.');
INSERT INTO `deprimido` VALUES ('13', 'Otimismo é esperar pelo melhor. Confiança é saber lidar com o pior.');
INSERT INTO `deprimido` VALUES ('14', 'Pare de esperar as coisas acontecerem. Vá lá e faça com que aconteçam.');
INSERT INTO `deprimido` VALUES ('15', 'As melhores coisas acontecem para quem levanta e faz!');
INSERT INTO `deprimido` VALUES ('16', 'Receita para realizar sonhos: comece onde você está, use o que você tem e faça o que você pode!');

-- ----------------------------
-- Table structure for `feliz`
-- ----------------------------
DROP TABLE IF EXISTS `feliz`;
CREATE TABLE `feliz` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `frase` varchar(500) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=32 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of feliz
-- ----------------------------
INSERT INTO `feliz` VALUES ('1', 'Felicidade tem nome: Deus, família e amigos.');
INSERT INTO `feliz` VALUES ('2', 'Não importa o que você decidiu. O que importa é que isso te faça feliz.');
INSERT INTO `feliz` VALUES ('3', 'Ser feliz não é viver apenas momentos de alegria. É ter coragem de enfrentar os momentos de tristeza e sabedoria para transformar os problemas em aprendizado.');
INSERT INTO `feliz` VALUES ('4', 'Nem todos os anjos tem asas, às vezes eles têm apenas o dom de te fazer sorrir.');
INSERT INTO `feliz` VALUES ('5', 'A vida me ensinou que chorar alivia, mas sorrir torna tudo mais bonito.');
INSERT INTO `feliz` VALUES ('6', 'Corra o risco. Se der certo, felicidade. Se não, sabedoria.');
INSERT INTO `feliz` VALUES ('7', 'Chique é ser feliz. Elegante é ser honesto. Bonito é ser caridoso. Sábio é saber ser grato. O resto é inversão de valores.');
INSERT INTO `feliz` VALUES ('8', 'Tomara que a felicidade te pegue de jeito, e não te solte nunca mais... Vou achar bem feito porque você vai ganhar o que você merece: ser feliz!');
INSERT INTO `feliz` VALUES ('9', 'Prefira o sorriso, faz bem a você e aos que estão ao seu redor. Dê risada de tudo, de si mesmo. Não adie alegrias. Seja feliz hoje!');
INSERT INTO `feliz` VALUES ('10', 'A amizade não se compra, se encontra. A felicidade não se encontra, se sente. O amor não se sente, se vive.');
INSERT INTO `feliz` VALUES ('11', 'Que o vento leve, que a chuva lave, que a alma brilhe, que o coração acalme, que a harmonia se instale e a felicidade permaneça.');
INSERT INTO `feliz` VALUES ('12', 'Que a vontade de ser feliz seja sempre maior que o medo de se machucar.');
INSERT INTO `feliz` VALUES ('13', 'Aí vem a vida e te vira do avesso só para provar que a felicidade vem de dentro pra fora.');
INSERT INTO `feliz` VALUES ('14', 'Sorrir não mata. Viver não dói. Abraçar não arde. Beijar não fere. Rir não machuca. Ou seja, você não tem motivos para não tentar ser feliz.');
INSERT INTO `feliz` VALUES ('15', 'Faça mais do que te faz feliz.');
INSERT INTO `feliz` VALUES ('16', 'Não existe um caminho para a felicidade. A felicidade é o caminho.');
INSERT INTO `feliz` VALUES ('17', 'Eu nasci para ser feliz, não para ser normal.');
INSERT INTO `feliz` VALUES ('18', 'Seja feliz. Não aceite menos que isso.');
INSERT INTO `feliz` VALUES ('19', 'Se a felicidade bater, apanhe!');
INSERT INTO `feliz` VALUES ('20', 'O sorriso é o arco-íris do rosto.');
INSERT INTO `feliz` VALUES ('21', 'Viva do seu jeito. Seja feliz como você é.');
INSERT INTO `feliz` VALUES ('22', 'Ser feliz sem motivo é a mais autêntica forma de felicidade.');
INSERT INTO `feliz` VALUES ('23', 'O melhor lugar do mundo é sempre ao lado de quem te faz feliz.');
INSERT INTO `feliz` VALUES ('24', 'Tristeza não tem fim, felicidade sim.');
INSERT INTO `feliz` VALUES ('25', 'Bonito é ser o motivo do sorriso de alguém.');
INSERT INTO `feliz` VALUES ('26', 'Já que a felicidade incomoda tanto, vamos cuidar de ser ainda mais felizes e incomodar muito mais!');
INSERT INTO `feliz` VALUES ('27', 'Não deixe o medo te impedir de ser feliz.');
INSERT INTO `feliz` VALUES ('28', 'Que a felicidade seja sonho, meta e realidade.');
INSERT INTO `feliz` VALUES ('29', 'O segredo da felicidade é não dar importância ao que não tem importância.');
INSERT INTO `feliz` VALUES ('30', 'Deixe um sinal de alegria por onde você passar.');
INSERT INTO `feliz` VALUES ('31', '');

-- ----------------------------
-- Table structure for `inseguro`
-- ----------------------------
DROP TABLE IF EXISTS `inseguro`;
CREATE TABLE `inseguro` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `frase` varchar(500) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=28 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of inseguro
-- ----------------------------
INSERT INTO `inseguro` VALUES ('1', 'Sou uma pessoa insegura, indecisa, sem rumo na vida, sem leme para me guiar: na verdade não sei o que fazer comigo.');
INSERT INTO `inseguro` VALUES ('2', 'A pior ofensa que você pode fazer a uma pessoa insegura é gostar dela.');
INSERT INTO `inseguro` VALUES ('3', 'Malditos os inseguros e os parcimoniosos! O defeito prejudica mais do que o excesso.');
INSERT INTO `inseguro` VALUES ('4', 'Não penso em me vingar, não sou assim. A tua insegurança era por mim.');
INSERT INTO `inseguro` VALUES ('5', 'Prometa que sempre que se sentir triste ou insegura ou perder completamente a fé, vai tentar olhar para si mesma, com meus olhos');
INSERT INTO `inseguro` VALUES ('6', 'Tenho um sorriso confiante que as vezes não demonstra o tanto de insegurança por trás dele.');
INSERT INTO `inseguro` VALUES ('7', 'Nossas dúvidas são traidoras e nos fazem perder o que seria nosso pelo simples medo de tentar.');
INSERT INTO `inseguro` VALUES ('8', 'A insegurança e a frustação levam o homem à violência e à guerra.');
INSERT INTO `inseguro` VALUES ('9', 'Tenho um pouco de medo: medo ainda de me entregar pois o próximo instante é o desconhecido.');
INSERT INTO `inseguro` VALUES ('10', 'Nenhum vento sopra a favor de quem não sabe pra onde ir.');
INSERT INTO `inseguro` VALUES ('11', 'Mulher insegura é uma máquina colocadora de chifres.');
INSERT INTO `inseguro` VALUES ('12', 'Ninguém vai dar segurança para você! É um problema seu.');
INSERT INTO `inseguro` VALUES ('13', 'Viver de acordo com as expectativas dos outros é suicídio.');
INSERT INTO `inseguro` VALUES ('14', 'Se eu preciso que os outros digam que sou o melhor, minha auto estima está baixa.');
INSERT INTO `inseguro` VALUES ('15', 'Temos uma direção, mas não o caminho, enxergamos e não conseguimos ver, temos as palavras, e não as respostas.');
INSERT INTO `inseguro` VALUES ('16', 'A confiança é como um espelho, podemos repará-lo se estiver partido, mas continuaremos sempre a ver a falha no reflexo daquela porcaria.');
INSERT INTO `inseguro` VALUES ('17', 'Não se deixe entusiasmar a ponto de não conseguir distinguir amor de atração, amor de carência, amor de insegurança, amor de fantasia.');
INSERT INTO `inseguro` VALUES ('18', 'E sem saber por quê, começou a chorar sentindo-se só e pobre e feia e infeliz e confusa e abandonada e bêbada e triste, triste, triste.');
INSERT INTO `inseguro` VALUES ('19', 'Ciume é prova de insegurança pessoal');
INSERT INTO `inseguro` VALUES ('20', 'Posso ter toda a insegurança do mundo, mas espero o tempo que for por aquilo que mais quero.');
INSERT INTO `inseguro` VALUES ('21', 'Os mais inseguros são justamente os idiotas que tentam mostrar que são bons o tempo todo');
INSERT INTO `inseguro` VALUES ('22', 'Sou tão inseguro, meu bem, não faça assim comigo não, como dizia Carmen Miranda.');
INSERT INTO `inseguro` VALUES ('23', 'Tenho muitas vezes negligenciada minha aparência. Eu admito, e eu também admito isso é chocante.');
INSERT INTO `inseguro` VALUES ('24', 'As Bolsas de Valores, como os aviões, são cem por cento seguras: todo avião que sobe, desce.');
INSERT INTO `inseguro` VALUES ('25', 'O grande triunfo do adversário é fazer-nos crer o que diz de nós.');
INSERT INTO `inseguro` VALUES ('26', 'Um homem livre é, por força, inseguro. Um homem pensador é, forçosamente, dubitativo.');
INSERT INTO `inseguro` VALUES ('27', '');

-- ----------------------------
-- Table structure for `motiv`
-- ----------------------------
DROP TABLE IF EXISTS `motiv`;
CREATE TABLE `motiv` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `frase` varchar(500) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=38 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of motiv
-- ----------------------------
INSERT INTO `motiv` VALUES ('1', 'Algumas vezes coisas ruins acontecem em nossas vidas para nos colocar na direção das melhores coisas que poderíamos viver.');
INSERT INTO `motiv` VALUES ('2', 'Imagine uma nova história para sua vida e acredite nela.');
INSERT INTO `motiv` VALUES ('3', 'Não deixe que as pessoas te façam desistir daquilo que você mais quer na vida. Acredite. Lute. Conquiste. E acima de tudo, seja feliz.');
INSERT INTO `motiv` VALUES ('4', 'Não importa o que você decidiu. O que importa é que isso te faça feliz.');
INSERT INTO `motiv` VALUES ('5', 'O importante não é vencer todos os dias, mas lutar sempre.');
INSERT INTO `motiv` VALUES ('6', 'Por maior que seja, não há obstáculo que não possa ser superado.');
INSERT INTO `motiv` VALUES ('7', 'Quando algo ruim acontece você tem três escolhas: deixar isso definir você, deixar isso destruir você ou fazer isso te deixar mais forte.');
INSERT INTO `motiv` VALUES ('8', 'Se a caminhada está difícil, é porque você está no caminho certo.');
INSERT INTO `motiv` VALUES ('9', 'Se a vida não ficar mais fácil, trate de ficar mais forte.');
INSERT INTO `motiv` VALUES ('10', 'Se não puder fazer tudo, faça tudo que puder.');
INSERT INTO `motiv` VALUES ('11', 'Toda conquista começa com a decisão de tentar.');
INSERT INTO `motiv` VALUES ('12', 'Todo esforço tem a sua recompensa.');
INSERT INTO `motiv` VALUES ('13', 'Vai. E se der medo, vai com medo mesmo.');
INSERT INTO `motiv` VALUES ('14', 'Você é mais forte do que imagina. Acredite.');
INSERT INTO `motiv` VALUES ('15', 'Aquele que não luta para ter o futuro que quer deve aceitar o futuro que vier.');
INSERT INTO `motiv` VALUES ('16', 'Grandes batalhas só são dadas a grandes guerreiros.');
INSERT INTO `motiv` VALUES ('17', 'Você não é derrotado quando perde. Você é derrotado quando desiste.');
INSERT INTO `motiv` VALUES ('18', 'Esqueça os piores momentos da sua vida e faça os melhores se tornarem inesquecíveis.');
INSERT INTO `motiv` VALUES ('19', 'Sem sacrifício não há vitória.');
INSERT INTO `motiv` VALUES ('20', 'Seja seu foco. Faça as coisas por você, não pelos outros.');
INSERT INTO `motiv` VALUES ('21', 'Em vez de reclamar da vida, levante a cabeça, sacuda a poeira e dê a volta por cima. Afinal, dias ruins são necessários para que os bons valham a pena!');
INSERT INTO `motiv` VALUES ('22', 'Persista! Se tudo fosse fácil, qualquer um conseguiria.');
INSERT INTO `motiv` VALUES ('23', 'Se um dia a razão te pedir para desistir e o coração te mandar lutar, lute. Pois não é a razão que bate pra você viver e sim o coração.');
INSERT INTO `motiv` VALUES ('24', 'Suba o primeiro degrau com fé. Não é necessário que você veja toda a escada, apenas dê o primeiro passo.');
INSERT INTO `motiv` VALUES ('25', 'Pare de esperar as coisas acontecerem. Vá lá e faça com que aconteçam.');
INSERT INTO `motiv` VALUES ('26', 'As melhores coisas acontecem para quem levanta e faz!');
INSERT INTO `motiv` VALUES ('27', 'Receita para realizar sonhos: comece onde você está, use o que você tem e faça o que você pode!');
INSERT INTO `motiv` VALUES ('28', 'Erros são provas de que você está tentando. Não desista.');
INSERT INTO `motiv` VALUES ('29', 'A determinação de hoje é o sucesso de amanhã.');
INSERT INTO `motiv` VALUES ('30', 'Todos os dias faça algo que o deixe mais próximo de um futuro melhor.');
INSERT INTO `motiv` VALUES ('31', 'Não existe triunfo sem perda, não há vitória sem sofrimento, não há liberdade sem sacrifício.');
INSERT INTO `motiv` VALUES ('32', 'O único lugar onde o sucesso vem antes do trabalho é no dicionário.');
INSERT INTO `motiv` VALUES ('33', 'Se existir 1% de chance, lute até o fim.');
INSERT INTO `motiv` VALUES ('34', 'Não abra mão do que você acredita só porque alguém acha que não vale a pena.');
INSERT INTO `motiv` VALUES ('35', 'Se te acrescenta, tenta!');
INSERT INTO `motiv` VALUES ('36', 'Faça do \'é impossível\' a sua maior motivação.');
INSERT INTO `motiv` VALUES ('37', 'Se você realmente quer que aconteça, vá atrás e não desista.');

-- ----------------------------
-- Table structure for `usuarios`
-- ----------------------------
DROP TABLE IF EXISTS `usuarios`;
CREATE TABLE `usuarios` (
  `login` varchar(12) NOT NULL,
  `passe` varchar(12) NOT NULL,
  `permissao` varchar(1) NOT NULL,
  `nome` varchar(40) NOT NULL,
  `email` varchar(35) NOT NULL,
  `sexo` varchar(15) NOT NULL,
  `dnasc` varchar(10) NOT NULL,
  `idade` varchar(2) NOT NULL,
  PRIMARY KEY (`login`,`passe`,`permissao`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of usuarios
-- ----------------------------
