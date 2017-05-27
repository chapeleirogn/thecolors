      if (sprintf(sql, "INSERT INTO usuarios VALUES('%s','%s','%s','%s','%s','%s','%s','%s')",
            cadastro[i].login,
            cadastro[i].passe,
            cadastro[i].permissao,
            cadastro[i].nome,
            cadastro[i].email,
            cadastro[i].sexo,
            cadastro[i].dnasc,
            cadastro[i].idade)) {
      finish_with_error(con);
    }
