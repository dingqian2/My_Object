-- MySQL dump 10.13  Distrib 5.5.27, for Linux (i686)
--
-- Host: localhost    Database: login_info
-- ------------------------------------------------------
-- Server version	5.5.27

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Current Database: `login_info`
--

CREATE DATABASE /*!32312 IF NOT EXISTS*/ `login_info` /*!40100 DEFAULT CHARACTER SET utf8 */;

USE `login_info`;

--
-- Table structure for table `friend`
--

DROP TABLE IF EXISTS `friend`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `friend` (
  `localname` char(100) NOT NULL,
  `friendname` char(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `friend`
--

LOCK TABLES `friend` WRITE;
/*!40000 ALTER TABLE `friend` DISABLE KEYS */;
INSERT INTO `friend` VALUES ('汪玲','李四'),('李四','汪玲'),('李四','王五'),('王五','李四'),('汪玲','王五'),('王五','汪玲'),('李四','赵六'),('赵六','李四'),('王五','赵六'),('赵六','王五'),('汪玲','赵六'),('赵六','汪玲'),('11','李四'),('李四','11'),('汪玲','11'),('11','汪玲'),('王五','11'),('11','王五');
/*!40000 ALTER TABLE `friend` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `user_info`
--

DROP TABLE IF EXISTS `user_info`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `user_info` (
  `username` char(100) NOT NULL,
  `password` char(34) NOT NULL,
  `sex` char(10) DEFAULT NULL,
  `birth` date DEFAULT NULL,
  `phone` char(12) NOT NULL,
  `hobby` char(100) DEFAULT NULL,
  PRIMARY KEY (`username`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `user_info`
--

LOCK TABLES `user_info` WRITE;
/*!40000 ALTER TABLE `user_info` DISABLE KEYS */;
INSERT INTO `user_info` VALUES ('11','25d55ad283aa400af464c76d713c07ad','男','2000-01-01','11111111111','王者荣耀,英雄联盟,'),('111','1bbd886460827015e5d605ed44252251','男','2000-01-01','11111111111','王者荣耀,英雄联盟,'),('1111','1bbd886460827015e5d605ed44252251','男','2000-01-01','11111111111','王者荣耀,英雄联盟,'),('倩李','25d55ad283aa400af464c76d713c07ad','男','2000-01-01','12345678907','王者荣耀,'),('哈哈','25d55ad283aa400af464c76d713c07ad','男','2000-01-01','12345678909','王者荣耀,'),('张八','25d55ad283aa400af464c76d713c07ad','男','2000-01-01','12345678909','王者荣耀,'),('李倩','25d55ad283aa400af464c76d713c07ad','男','2000-01-01','12345678980','王者荣耀,'),('李倩二','25d55ad283aa400af464c76d713c07ad','男','2000-01-01','12345678987','王者荣耀,'),('李四','25d55ad283aa400af464c76d713c07ad','男','2000-01-01','12345678909','王者荣耀,'),('汪玲','25d55ad283aa400af464c76d713c07ad','男','2000-01-01','12345678909','王者荣耀,'),('牛','25d55ad283aa400af464c76d713c07ad','男','2000-01-01','12345678909','王者荣耀,'),('王五','25d55ad283aa400af464c76d713c07ad','男','2000-01-01','12345678901','王者荣耀,'),('王麻子是傻逼123','25d55ad283aa400af464c76d713c07ad','男','2000-01-01','12345678909','王者荣耀,'),('赵六','25d55ad283aa400af464c76d713c07ad','男','2000-01-01','12345678909','王者荣耀,');
/*!40000 ALTER TABLE `user_info` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2018-02-17 21:41:02
