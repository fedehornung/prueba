PROTOCOLO

Server 


include commons

configure_logger
log_create() (para cerrar exit_gracefully())

Client: connect_to_server
			connect
			wait_hello (recibe estructura struct typedef)
			send_hello 
			send_mensaje (envia estructura struct typedef)la estructura se envia con "&"
			wait_content(1) (recibe mensaje de tamaño variable, estructura con header: ID | tamaño datos / mensaje: datos
							Nota: es importante tener en cuenta que el servidor enviará un string como dato pero no incluirá ‘\0’ al final. El proceso deberá agregarlo para que el MD5 coincida.
			calcular MD5  (biblioteca openssl) y enviar al servidor
			send_md5 (estructura header: ID | tamaño datos / mensaje: resultado de MD5)
			wait_confirmation (1 si fue bien o 0 si fallo (si fallo, pide la retransmision)
			
