

# RDAG
![RDAG](https://rdagcoin.org/img/rdagcoin_logo.2c3c4bae.png)

RDAG is an innovative blockchain project leveraging virtual blocks and Directed Acyclic Graph (DAG) technology to address the
      "impossible trinity" (decentralization, security, and high throughput) challenges faced by traditional blockchain technology. RDAG is
      particularly suitable for blockchain-based online games (GameFi), enabling low-latency game interactions through virtual blocks. It
      aims to become the first blockchain natively supporting GameFi.

## DAG GameFi
>  By leveraging virtual blocks and Directed Acyclic Graph (DAG) technology, RDAG delivers rapid transaction confirmations, high network throughput, and robust security.

## Virtual Blocks
> One of RDAG's core innovations is the introduction of virtual blocks. 100 virtual blocks are generated every second, which are then
      consolidated into a single real block every minute. This design significantly enhances transaction confirmation speed, improving the
      user experience.

### Directed Acyclic Graph (DAG)
>RDAG adopts a Directed Acyclic Graph (DAG) structure, allowing parallel processing of transactions, greatly increasing network
      throughput and transaction confirmation speed. The DAG structure also inherently provides protection against double-spending attacks,
      enhancing system security.



# rdag - node
Rdag Node Source Code - this repository contains the source code of a full rdag node.

## Prerequisites
To run a rdag node, you need the following spec:
- Bare Metal Server/Computer with at least 4 Cores 
- At least 8GB of RAM
- At least 60GB of ssd
- 2.5Gb/s synchronous internet connection
- A USB Stick or SSD/HD attached to the Computer
- UEFI Bios 



## Node and Mining Pool Software Documentation
### Overview
This document outlines the functionalities and configurations for the combined node and mining pool software. This integration allows wallets and mining software to connect directly to a self-hosted node without needing additional synchronization.
### Features
#### 1. Full Block Node
Wallets can connect directly to the full block node without the need for further synchronization. This connection is established using the following command:
```
--url [node_address:node_port]
```
#### 2. Mining Software Connection
Similarly, the mining software connects to the node using the same command format:
```
--url [node_address:node_port]
```
#### 3. Configuration File
Here is a detailed explanation of the configuration file required for setting up the node and mining pool:
```
{
  "port": 3000,  // Node's external interface port
  "tcp": 3001,   // TCP interface port
  "ws": 3002,    // WebSocket interface port
  "log": true,   // Enable logging
  "isPool": true, // Enable mining pool. If disabled, mining software cannot connect to the node
  "poolConfig": { // Mining pool configuration
    "name": "myPool", // Name of the mining pool to be retained in the block
    "model": "PPLNS", // Mining model: PPLNS or SOLO
    "address": "ADDRESS", // Mining pool wallet address for receiving all rewards
    "privateKey": "Wallet_private_key", // Wallet private key, obtainable from the wallet homepage
    "fee": 1, // Mining pool fee percentage
    "netFee": 500, // Transaction fee, must not be less than 500
    "minPay": 1000000, // Minimum payment amount for payouts
    "timePay": 10 // Payment interval in minutes
  }
}
```
#### 4. RPC Interfaces
The node software provides several RPC interfaces for accessing data:
```
/node/getPoolStatus: Retrieves the status of the pool.
/node/getPoolWorkers: Lists the miners connected to the pool.
/node/getPoolBlocks: Fetches data for the blocks mined by the pool (last 100 blocks).
/node/getPoolPayments: Provides the record of payments made by the pool (last 1000 transactions).
```
### Connection Setup
To connect your wallet or mining software to the node, use the command format mentioned above with the specific node address and port configured in your setup.


## Limited Support
We cannot support you in any case. You are welcome to provide updates, bug fixes, or other code changes by pull requests.


# Vision
RDAG is committed to continually optimizing and enhancing its underlying technology, further improving network performance and
      security. Simultaneously, we will actively expand RDAG’s application scenarios, collaborating with partners across various industries
      to drive the development and adoption of blockchain technology.
