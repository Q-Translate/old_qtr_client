api = 2
core = 7.x

;------------------------------
; Build Drupal core (with patches).
;------------------------------
includes[drupal] = drupal-org-core.make

;------------------------------
; Get profile qtr_client.
;------------------------------
projects[qtr_client][type] = profile
projects[qtr_client][download][type] = git
projects[qtr_client][download][url] = /usr/local/src/qtr_client
projects[qtr_client][download][branch] = master
