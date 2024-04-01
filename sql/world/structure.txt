-- Put only sql structure in this file (create table if exists, delete table, alter table etc...).
-- If you don't use this database, then delete this file.

-- ----------------------------
-- Table structure for `objscale_creature`
-- ----------------------------
DROP TABLE IF EXISTS `objscale_creature`;
CREATE TABLE `objscale_creature` (
  `guid` int(10) unsigned NOT NULL DEFAULT '0' COMMENT 'Global Unique Identifier',
  `scale` float DEFAULT NULL,
  PRIMARY KEY (`guid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- ----------------------------
-- Table structure for `objscale_gameobject`
-- ----------------------------
DROP TABLE IF EXISTS `objscale_gameobject`;
CREATE TABLE `objscale_gameobject` (
  `guid` int(10) unsigned NOT NULL DEFAULT '0' COMMENT 'Global Unique Identifier',
  `scale` float DEFAULT NULL,
  PRIMARY KEY (`guid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;


