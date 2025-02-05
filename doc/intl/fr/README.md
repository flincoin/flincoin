<h1 align="center">
<img src="https://raw.githubusercontent.com/flincoin/flincoin/master/share/pixmaps/flincoin256.svg" alt="Flincoin" width="256"/>
<br/><br/>
Flincoin Core [FLIN, ₣]  
</h1>

**IMPORTANT : À partir d'août 2024, la branche `master` est devenue la branche principale d'intégration et est devenue instable. Veuillez consulter une version _taguée_ avant de compiler des binaires de production.**

Flincoin est une crypto-monnaie communautaire qui s'inspire d'un mème de Shiba Inu. Le logiciel Flincoin Core permet à quiconque d'exploiter un nœud dans les réseaux de la blockchain Flincoin et utilise la méthode de hachage Scrypt pour la preuve de travail. Il est adapté de Bitcoin Core et d'autres crypto-monnaies.

Pour plus d'informations sur les frais par défaut utilisés sur le réseau Flincoin, veuillez consulter la [recommandation sur les frais](doc/fee-recommendation.md).

## Utilisation 💻

Pour commencer votre voyage avec Flincoin Core, consultez le [guide d'installation](INSTALL.md) et le [tutoriel de démarrage](doc/getting-started.md).

L'API JSON-RPC fournie par Flincoin Core est auto-documentée et peut être parcourue avec `flincoin-cli help`, tandis que des informations détaillées pour chaque commande peuvent être visualisées avec `flincoin-cli help <command>`.

### Les ports

Flincoin Core utilise par défaut le port `33556` pour la communication pair-à-pair qui est nécessaire pour synchroniser la blockchain au "mainnet" et rester informé des nouvelles transactions et blocs. De plus, un port JSONRPC peut être ouvert, dont par défaut le port `33555` est utilisé pour les nœuds du réseau principal. Il est fortement recommandé de ne pas exposer les ports RPC à l'Internet public.

| Function | mainnet | testnet | regtest |
| :------- | ------: | ------: | ------: |
| P2P      |   33556 |   55556 |   28444 |
| RPC      |   33555 |   55555 |   28332 |

## Développement continu - Moon plan 🌒

Flincoin Core est un logiciel libre et communautaire. Le processus de développement est ouvert et publiquement visible; tout le monde peut voir, discuter et travailler sur le logiciel.

Principales ressources de développement :

* [GitHub Projects](https://github.com/flincoin/flincoin/projects) est utilisé pour
  suivre les travaux prévus et en cours pour les prochaines versions.
* [GitHub Discussion](https://github.com/flincoin/flincoin/discussions) est utilisé pour
  discuter des caractéristiques, planifiées et non planifiées, liées à la fois au développement du logiciel Flincoin Core, les protocoles sous-jacents et l'actif FLIN.

### Stratégie de version

Les numéros de version suivent la sémantique ```major.minor.patch```.

### Branches

Il y a 4 types de branches dans ce répertoire :

- **master :** Instable, contient le code le plus récent en développement.
- **maintenance :** Stable, contient la dernière version des versions précédentes, qui sont toujours en maintenance active. Format : ```<version>-maint```
- **development :** Instable, contient du nouveau code pour les versions prévues. Format : ```<version>-dev``` 
- **archive :** Stable, branches immuables d'anciennes versions qui ne sont plus maintenues.

***Veuillez soumettre vos demandes de tirage contre la branche `master`.***

*Les branches `master` et `maintenance` sont exclusivement mutables par version. Lorsqu'une version est planifiée, une branche de développement est créée et les commits de `master` sont sélectionnés et intégrés par les mainteneurs.*

## Contribution🤝

Si vous trouvez un bug ou rencontrez des problèmes avec ce logiciel, veuillez le signaler en utilisant le [système de gestion des problèmes](https://github.com/flincoin/flincoin/issues/new?assignees=&labels=bug&template=bug_report.md&title=%5Bbug%5D+).

Veuillez consulter [le guide de contribution](CONTRIBUTING.md) pour voir comment vous pouvez
participer au développement de Flincoin Core. Il y a souvent
[des sujets demandant de l'aide](https://github.com/flincoin/flincoin/labels/help%20wanted)
où vos contributions auront un impact considérable et seront très appréciées. wow.

## Questions très fréquemment posées ❓

Vous avez une question concernant le Flincoin ? Une réponse se trouve peut-être déjà dans la
[FAQ](doc/FAQ.md) ou dans la
[section Q&R](https://github.com/flincoin/flincoin/discussions/categories/q-a)
du forum de discussion !

## License - Much license ⚖️
Flincoin Core est publié sous les termes de la licence MIT. Voir
[COPYING](COPYING) pour plus d'informations.
