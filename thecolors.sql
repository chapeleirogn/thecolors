/*
Navicat MySQL Data Transfer

Source Server         : localhost_3306
Source Server Version : 50505
Source Host           : localhost:3306
Source Database       : thecolors

Target Server Type    : MYSQL
Target Server Version : 50505
File Encoding         : 65001

Date: 2017-05-27 18:17:23
*/

SET FOREIGN_KEY_CHECKS=0;

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
INSERT INTO `usuarios` VALUES ('gmelo', 'gmelo', '1', 'getulio', 'gmai', 'masf', '0213213', '22');
