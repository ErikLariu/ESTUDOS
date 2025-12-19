CREATE TABLE usuarios (
usuario_id INT NOT NULL AUTO_INCREMENT, /* Lista padronizada (ou seja, não precisa do int) */ 
nome VARCHAR(100) NOT NULL, 
nome_usuario VARCHAR(50) NOT NULL,
pais VARCHAR(50) NOT NULL
);

/*  

PARA INSERT(s) usar (describle)

Ex:

descible usuarios:

usuario_id (Auto Increment)
nome VARCHAR(100) NOT NULL, 
nome_usuario VARCHAR(50) NOT NULL
pais VARCHAR(50) NOT NULL

*/ 

CREATE TABLE plataformas (
plataforma_id INT NOT NULL AUTO_INCREMENT,
nome VARCHAR(50) NOT NULL
);

CREATE TABLE postagens (
postagem_id INT NOT NULL AUTO_INCREMENT,
usuario_id INT REFERENCES usuarios(usuario_id), /* REFERENCES para referenciar um ID*/ 
plataforma_id INT REFERENCES plataformas(plataforma_id),
data_postagem DATE,
tipo VARCHAR(20),
descricao TEXT
);

CREATE TABLE hashtags (
hashtag_id INT NOT NULL AUTO_INCREMENT,
texto VARCHAR(100) NOT NULL
);

CREATE TABLE postagens_hashtags (
postagem_id INT REFERENCES postagens(postagem_id),
hashtag_id INT REFERENCES hashtags(hashtag_id),
PRIMARY KEY (postagem_id, hashtag_id)
);

CREATE TABLE engajamentos (
usuario_id INT NOT NULL,
postagem_id INT NOT NULL,
plataforma_id INT NOT NULL
);


