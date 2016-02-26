DELETE FROM `rbac_permissions` WHERE `id` IN (1910,1911,1912,1913,1914,1915,1916);
INSERT INTO `rbac_permissions` (`id`, `name`) VALUES
(1910, 'Command: wg'),
(1911, 'Command: wg enable'),
(1912, 'Command: wg start'),
(1913, 'Command: wg status'),
(1914, 'Command: wg stop'),
(1915, 'Command: wg switch'),
(1916, 'Command: wg timer');

DELETE FROM `rbac_linked_permissions` WHERE `linkedid` IN (1910,1911,1912,1913,1914,1915,1916);
INSERT INTO `rbac_linked_permissions` (`id`,`linkedId`) VALUES
(193, 1910),
(193, 1911),
(193, 1912),
(193, 1913),
(193, 1914),
(193, 1915),
(193, 1916);

