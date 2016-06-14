
### Git branch that will be used.
qcl_git_branch='master'

### Domain of the website.
qcl_domain='fr.example.org'

### Drupal 'admin' password.
qcl_admin_passwd='admin'

### Emails from the server are sent through the SMTP
### of a GMAIL account. Give the full email
### of the gmail account, and the password.
gmail_account='MyEmailAddress@gmail.com'
gmail_passwd=

### Translation language of Q-Translate Client.
translation_lng='fr'

### Mysql passwords. Leave it as 'random'
### to generate a new one randomly
mysql_passwd_root='random'
mysql_passwd_qcl='random'

### Settings for OAuth2 Login.
oauth2_server_url='http://dev.qtranslate.org'
oauth2_client_id='client1'
oauth2_client_secret='0123456789'

### Install also extra things that are useful for development.
development='true'

### Login through ssh.
### Only login through private keys is allowed.
### See also this:
###   http://dashohoxha.blogspot.com/2012/08/how-to-secure-ubuntu-server.html
sshd_port=2201
