<?php
/**
 * @file
 * qcl_content.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function qcl_content_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<img src=\\"http://info.qtranslate.org/images/qtranslate.png\\" width=\\"100\\" style=\\"float:left;\\" />\\r\\n\\r\\n<p><strong>Q-Translate</strong> aims to improve the translations of the Quran, by getting review and feedback from many people. This may help to double check the translations, fix any mistakes or typos, and improve the translation quality.</p>\\r\\n\\r\\n<p>The original text of the Quran is downloaded from <a href=\\"http://tanzil.net/download/\\" target=\\"_blank\\">http://tanzil.net/download/</a> and the translations from <a href=\\"http://tanzil.net/trans/\\" target=\\"_blank\\">http://tanzil.net/trans/</a></p>\\r\\n<hr/>\\r\\n\\r\\n<div class=\\"row\\">\\r\\n<div class=\\"col-sm-6\\">\\r\\n<h2 style=\\"font-size:medium\\">Info Pages:</h2>\\r\\n<ul>\\r\\n  <li><a href=\\"http://info.qtranslate.org/install.html\\" target=\\"_blank\\">Installation</a></li>\\r\\n  <li><a href=\\"http://info.qtranslate.org/api/\\" target=\\"_blank\\">API Reference</a></li>\\r\\n  <li><a href=\\"http://info.qtranslate.org/api-examples-js/\\" target=\\"_blank\\">API Examples</a></li>\\r\\n  <li><a href=\\"http://info.qtranslate.org/docs.html\\" target=\\"_blank\\">Documentation</a></li>\\r\\n</ul>\\r\\n</div>\\r\\n\\r\\n<div class=\\"col-sm-6\\">\\r\\n<h2 style=\\"font-size:medium\\">Sites Using Q-Translate:</h2>\\r\\n<ul>\\r\\n  <li><a href=\\"https://qtranslate.org\\" target=\\"_blank\\">https://qtranslate.org</a> - Q-Translate Server</li>\\r\\n  <li><a href=\\"https://qtranslate.net\\" target=\\"_blank\\">https://qtranslate.net</a> - Q-Translate Client</li>\\r\\n  <li><a href=\\"https://sq.qtranslate.org\\" target=\\"_blank\\">https://sq.qtranslate.org</a> - Albanian Translations</li>\\r\\n</ul>\\r\\n</div>\\r\\n</div>",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p><img src=\\"http://info.qtranslate.org/images/qtranslate.png\\" width=\\"100\\" style=\\"float:left;\\" /></p>\\n<p><strong>Q-Translate</strong> aims to improve the translations of the Quran, by getting review and feedback from many people. This may help to double check the translations, fix any mistakes or typos, and improve the translation quality.</p>\\n<p>The original text of the Quran is downloaded from <a href=\\"http://tanzil.net/download/\\" target=\\"_blank\\">http://tanzil.net/download/</a> and the translations from <a href=\\"http://tanzil.net/trans/\\" target=\\"_blank\\">http://tanzil.net/trans/</a></p>\\n<hr/>\\n<div class=\\"row\\">\\n<div class=\\"col-sm-6\\">\\n<h2 style=\\"font-size:medium\\">Info Pages:</h2>\\n<ul>\\n<li><a href=\\"http://info.qtranslate.org/install.html\\" target=\\"_blank\\">Installation</a></li>\\n<li><a href=\\"http://info.qtranslate.org/api/\\" target=\\"_blank\\">API Reference</a></li>\\n<li><a href=\\"http://info.qtranslate.org/api-examples-js/\\" target=\\"_blank\\">API Examples</a></li>\\n<li><a href=\\"http://info.qtranslate.org/docs.html\\" target=\\"_blank\\">Documentation</a></li>\\n</ul>\\n</div>\\n<div class=\\"col-sm-6\\">\\n<h2 style=\\"font-size:medium\\">Sites Using Q-Translate:</h2>\\n<ul>\\n<li><a href=\\"https://qtranslate.org\\" target=\\"_blank\\">https://qtranslate.org</a> - Q-Translate Server</li>\\n<li><a href=\\"https://qtranslate.net\\" target=\\"_blank\\">https://qtranslate.net</a> - Q-Translate Client</li>\\n<li><a href=\\"https://sq.qtranslate.org\\" target=\\"_blank\\">https://sq.qtranslate.org</a> - Albanian Translations</li>\\n</ul>\\n</div>\\n</div>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'disqus\' => array(
        \'domain\' => \'qtranslate\',
        \'url\' => \'https://qtranslate.net/what-q-translate\',
        \'title\' => \'What is Q-Translate\',
        \'identifier\' => \'node/1\',
        \'developer\' => 1,
        \'status\' => FALSE,
      ),
      \'field_image\' => array(),
      \'field_tags\' => array(),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'0\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'Anonymous\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'1\',
      \'rdf_mapping\' => array(
        \'field_image\' => array(
          \'predicates\' => array(
            \'og:image\',
            \'rdfs:seeAlso\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_tags\' => array(
          \'predicates\' => array(
            \'dc:subject\',
          ),
          \'type\' => \'rel\',
        ),
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => 1,
      \'status\' => \'1\',
      \'sticky\' => \'1\',
      \'title\' => \'What is Q-Translate\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'article\',
      \'uid\' => \'0\',
      \'uuid\' => \'0635f86d-b33b-419b-adac-20782d8fc830\',
      \'vid\' => NULL,
      \'vuuid\' => \'e6333c66-f908-4364-b36f-8b2b2556b7d6\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'If you try this url: <a href="https://qtranslate.org/tweet/en" target="_blank">https://qtranslate.org/tweet/en</a>, you will see that each time that you refresh it you will get a random translation, in a format suitable for twitting. This can be used in combination with <em>cli twitter clients</em> and with <strong>cron</strong> to post periodically random tweets about translations. See this script as an example: <a href="https://github.com/Q-Translate/qtr_server/blob/master/utils/twitter.sh" target="_blank">https://github.com/Q-Translate/qtr_server/blob/master/utils/twitter.sh</a>.\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>If you try this url: <a href=\\"https://qtranslate.org/tweet/en\\" target=\\"_blank\\">https://qtranslate.org/tweet/en</a>, you will see that each time that you refresh it you will get a random translation, in a format suitable for twitting. This can be used in combination with <em>cli twitter clients</em> and with <strong>cron</strong> to post periodically random tweets about translations. See this script as an example: <a href=\\"https://github.com/Q-Translate/qtr_server/blob/master/utils/twitter.sh\\" target=\\"_blank\\">https://github.com/Q-Translate/qtr_server/blob/master/utils/twitter.sh</a>.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'disqus\' => array(
        \'domain\' => \'qtranslate\',
        \'url\' => \'https://qtranslate.net/translation-tweets\',
        \'title\' => \'Translation Tweets\',
        \'identifier\' => \'node/2\',
        \'developer\' => 1,
        \'status\' => FALSE,
      ),
      \'field_image\' => array(),
      \'field_tags\' => array(),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'0\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'Anonymous\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'1\',
      \'rdf_mapping\' => array(
        \'field_image\' => array(
          \'predicates\' => array(
            \'og:image\',
            \'rdfs:seeAlso\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_tags\' => array(
          \'predicates\' => array(
            \'dc:subject\',
          ),
          \'type\' => \'rel\',
        ),
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => 1,
      \'status\' => \'1\',
      \'sticky\' => \'1\',
      \'title\' => \'Translation Tweets\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'article\',
      \'uid\' => \'0\',
      \'uuid\' => \'089096d5-4dbd-427f-b356-b9bca7a4c275\',
      \'vid\' => NULL,
      \'vuuid\' => \'30a84c22-e898-4d1a-80dc-df544addf1cc\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Q-Translate is responsive, which means that it is designed to look nice on small screens as well, usually on mobiles. But it also looks nice inside an iFrame as well, so it can easily be embedded inside another webpage.\\r\\nIt can be done by using an url like this as the <strong>src</strong> of an <strong>&lt;iframe&gt;</strong> tag:\\r\\n  <code>https://qtranslate.net/qtr/en/2/3?display=iframe</code>\\r\\n</p>\\r\\n\\r\\n<p>Here is a quick example to demonstrate this. Simply copy and paste this code inside a webpage:\\r\\n<!-- HTML generated using hilite.me -->\\r\\n<div><pre style=\\"margin: 0; line-height: 125%\\"><span style=\\"color: #6ab825; font-weight: bold\\">&lt;div</span> <span style=\\"color: #bbbbbb\\">style=</span><span style=\\"color: #ed9d13\\">&quot;width:500px; display:inline-block; float:right; border:1px solid #aaa; border-radius: 3px; padding:10px; margin-left: 10px;&quot;</span><span style=\\"color: #6ab825; font-weight: bold\\">&gt;</span>\\r\\n  <span style=\\"color: #6ab825; font-weight: bold\\">&lt;h3</span> <span style=\\"color: #bbbbbb\\">style=</span><span style=\\"color: #ed9d13\\">&quot;margin-top:0px; color:#2a2; font-size:large&quot;</span><span style=\\"color: #6ab825; font-weight: bold\\">&gt;</span>Q-Translate<span style=\\"color: #6ab825; font-weight: bold\\">&lt;/h3&gt;</span>\\r\\n  <span style=\\"color: #6ab825; font-weight: bold\\">&lt;iframe</span> <span style=\\"color: #bbbbbb\\">src=</span><span style=\\"color: #ed9d13\\">&quot;https://qtranslate.net/qtr/en/2/3?display=iframe&quot;</span>\\r\\n          <span style=\\"color: #bbbbbb\\">width=</span><span style=\\"color: #ed9d13\\">&quot;100%&quot;</span> <span style=\\"color: #bbbbbb\\">height=</span><span style=\\"color: #ed9d13\\">&quot;600px&quot;</span>\\r\\n          <span style=\\"color: #bbbbbb\\">seamless=</span><span style=\\"color: #ed9d13\\">&quot;seamless&quot;</span> <span style=\\"color: #bbbbbb\\">frameborder=</span><span style=\\"color: #ed9d13\\">&quot;0&quot;</span><span style=\\"color: #6ab825; font-weight: bold\\">&gt;</span>\\r\\n  <span style=\\"color: #6ab825; font-weight: bold\\">&lt;/iframe&gt;</span>\\r\\n<span style=\\"color: #6ab825; font-weight: bold\\">&lt;/div&gt;</span>\\r\\n</pre></div>\\r\\n</p>\\r\\n\\r\\n<div style=\\"width:500px; display:inline-block; float:right; border:1px solid #aaa; border-radius: 3px; padding:10px; margin-left: 10px;\\">\\r\\n  <h3 style=\\"margin-top:0px; color:#2a2; font-size:large\\">Q-Translate</h3>\\r\\n  <iframe src=\\"https://qtranslate.net/qtr/en/2/3?display=iframe\\"\\r\\n          width=\\"100%\\" height=\\"600px\\"\\r\\n          seamless=\\"seamless\\" frameborder=\\"0\\">\\r\\n  </iframe>\\r\\n</div>\\r\\n\\r\\n<p>Notice <strong>?display=iframe</strong> at the end of the URL. This tells the application to customize the output so that it is suitable for an iFrame. It basically includes an extra CSS file which tailors the application by hiding the navbar on the header of the page, removing any margins on the body of the page, etc.</p>\\r\\n\\r\\n<div style=\\"clear: both;\\" />\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p>Q-Translate is responsive, which means that it is designed to look nice on small screens as well, usually on mobiles. But it also looks nice inside an iFrame as well, so it can easily be embedded inside another webpage.<br />\\nIt can be done by using an url like this as the <strong>src</strong> of an <strong>&lt;iframe&gt;</strong> tag:<br />\\n  <code>https://qtranslate.net/qtr/en/2/3?display=iframe</code>\\n</p>\\n<p>Here is a quick example to demonstrate this. Simply copy and paste this code inside a webpage:</p>\\n<!-- HTML generated using hilite.me --><div>\\n<pre style=\\"margin: 0; line-height: 125%\\"><span style=\\"color: #6ab825; font-weight: bold\\">&lt;div</span> <span style=\\"color: #bbbbbb\\">style=</span><span style=\\"color: #ed9d13\\">&quot;width:500px; display:inline-block; float:right; border:1px solid #aaa; border-radius: 3px; padding:10px; margin-left: 10px;&quot;</span><span style=\\"color: #6ab825; font-weight: bold\\">&gt;</span>\\n  <span style=\\"color: #6ab825; font-weight: bold\\">&lt;h3</span> <span style=\\"color: #bbbbbb\\">style=</span><span style=\\"color: #ed9d13\\">&quot;margin-top:0px; color:#2a2; font-size:large&quot;</span><span style=\\"color: #6ab825; font-weight: bold\\">&gt;</span>Q-Translate<span style=\\"color: #6ab825; font-weight: bold\\">&lt;/h3&gt;</span>\\n  <span style=\\"color: #6ab825; font-weight: bold\\">&lt;iframe</span> <span style=\\"color: #bbbbbb\\">src=</span><span style=\\"color: #ed9d13\\">&quot;https://qtranslate.net/qtr/en/2/3?display=iframe&quot;</span>\\n          <span style=\\"color: #bbbbbb\\">width=</span><span style=\\"color: #ed9d13\\">&quot;100%&quot;</span> <span style=\\"color: #bbbbbb\\">height=</span><span style=\\"color: #ed9d13\\">&quot;600px&quot;</span>\\n          <span style=\\"color: #bbbbbb\\">seamless=</span><span style=\\"color: #ed9d13\\">&quot;seamless&quot;</span> <span style=\\"color: #bbbbbb\\">frameborder=</span><span style=\\"color: #ed9d13\\">&quot;0&quot;</span><span style=\\"color: #6ab825; font-weight: bold\\">&gt;</span>\\n  <span style=\\"color: #6ab825; font-weight: bold\\">&lt;/iframe&gt;</span>\\n<span style=\\"color: #6ab825; font-weight: bold\\">&lt;/div&gt;</span>\\n</pre></div>\\n</p>\\n<div style=\\"width:500px; display:inline-block; float:right; border:1px solid #aaa; border-radius: 3px; padding:10px; margin-left: 10px;\\">\\n<h3 style=\\"margin-top:0px; color:#2a2; font-size:large\\">Q-Translate</h3>\\n<iframe src=\\"https://qtranslate.net/qtr/en/2/3?display=iframe\\"\\n          width=\\"100%\\" height=\\"600px\\"\\n          seamless=\\"seamless\\" frameborder=\\"0\\">\\n  </iframe></div>\\n<p>Notice <strong>?display=iframe</strong> at the end of the URL. This tells the application to customize the output so that it is suitable for an iFrame. It basically includes an extra CSS file which tailors the application by hiding the navbar on the header of the page, removing any margins on the body of the page, etc.</p>\\n<div style=\\"clear: both;\\" />\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'disqus\' => array(
        \'domain\' => \'qtranslate\',
        \'url\' => \'https://qtranslate.net/embed-q-translate-inside-webpage\',
        \'title\' => \'Embed Q-Translate Inside a Webpage\',
        \'identifier\' => \'node/3\',
        \'developer\' => 1,
        \'status\' => FALSE,
      ),
      \'field_image\' => array(),
      \'field_tags\' => array(),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'0\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'Anonymous\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'1\',
      \'rdf_mapping\' => array(
        \'field_image\' => array(
          \'predicates\' => array(
            \'og:image\',
            \'rdfs:seeAlso\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_tags\' => array(
          \'predicates\' => array(
            \'dc:subject\',
          ),
          \'type\' => \'rel\',
        ),
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => 1,
      \'status\' => \'1\',
      \'sticky\' => \'1\',
      \'title\' => \'Embed Q-Translate Inside a Webpage\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'article\',
      \'uid\' => \'0\',
      \'uuid\' => \'0968e50a-f7d8-4f4f-bfdc-46b9678ea02d\',
      \'vid\' => NULL,
      \'vuuid\' => \'20fb29e5-1928-417b-a91e-5138615a8dd8\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>The user data provided to this application (for example email address) will be kept confident and will be used only for the purposes of the application.</p>\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>The user data provided to this application (for example email address) will be kept confident and will be used only for the purposes of the application.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'disqus\' => array(
        \'domain\' => \'qtranslate\',
        \'url\' => \'https://qtranslate.net/privacy\',
        \'title\' => \'Privacy Policy\',
        \'identifier\' => \'node/4\',
        \'developer\' => 1,
        \'status\' => FALSE,
      ),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'0\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'Anonymous\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => 1,
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Privacy Policy\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'0\',
      \'uuid\' => \'1ec0860e-f665-4352-aeec-c6fce8a94d02\',
      \'vid\' => NULL,
      \'vuuid\' => \'5d82f7ac-dd89-2764-ad20-739e4d2396cc\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "RSS feeds allow to follow easily the latest translations/suggestions. Their URL addess is like this: <a href=\\"https://qtranslate.net/qtr/rss-feed/en\\" target=\\"_blank\\">https://qtranslate.net/qtr/rss-feed/en</a> or <a href=\\"https://qtranslate.org/rss-feed/en\\" target=\\"_blank\\">https://qtranslate.org/rss-feed/en</a>. This address can be used in any <em>news/feed reader</em>, which connects periodically to this address to get from it the latest news. The frequency of refresh should be once in 1 or 2 hours, since the feeds are updated at most once in 2 hours, and contain only the latest translations since the last day.\\r\\nIn combination with services like <a href=\\"https://dlvr.it/\\" target=\\"_blank\\">https://dlvr.it/</a>, RSS feeds may become a powerful tool for sharing new translations to social networks.",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p>RSS feeds allow to follow easily the latest translations/suggestions. Their URL addess is like this: <a href=\\"https://qtranslate.net/qtr/rss-feed/en\\" target=\\"_blank\\">https://qtranslate.net/qtr/rss-feed/en</a> or <a href=\\"https://qtranslate.org/rss-feed/en\\" target=\\"_blank\\">https://qtranslate.org/rss-feed/en</a>. This address can be used in any <em>news/feed reader</em>, which connects periodically to this address to get from it the latest news. The frequency of refresh should be once in 1 or 2 hours, since the feeds are updated at most once in 2 hours, and contain only the latest translations since the last day.<br />\\nIn combination with services like <a href=\\"https://dlvr.it/\\" target=\\"_blank\\">https://dlvr.it/</a>, RSS feeds may become a powerful tool for sharing new translations to social networks.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'disqus\' => array(
        \'domain\' => \'qtranslate\',
        \'url\' => \'https://qtranslate.net/rss-feeds\',
        \'title\' => \'RSS Feeds\',
        \'identifier\' => \'node/5\',
        \'developer\' => 1,
        \'status\' => FALSE,
      ),
      \'field_image\' => array(),
      \'field_tags\' => array(),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'0\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'Anonymous\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'1\',
      \'rdf_mapping\' => array(
        \'field_image\' => array(
          \'predicates\' => array(
            \'og:image\',
            \'rdfs:seeAlso\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_tags\' => array(
          \'predicates\' => array(
            \'dc:subject\',
          ),
          \'type\' => \'rel\',
        ),
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => 1,
      \'status\' => \'1\',
      \'sticky\' => \'1\',
      \'title\' => \'RSS Feeds\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'article\',
      \'uid\' => \'0\',
      \'uuid\' => \'68b7f263-f310-4116-8450-26384e43ae9d\',
      \'vid\' => NULL,
      \'vuuid\' => \'98dad4c1-cb3e-4ec3-83bd-0e8512c1839d\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Search types are: <strong>Similar</strong> and <strong>Logical</strong>.</p>\\r\\n<ul>\\r\\n<li><strong>Similar searches</strong> return results according to the similarity with the search string.</li>\\r\\n<li><strong>Logical searches</strong> can use more advanced logic to select the right results. For example the sign <strong>+</strong> (or <strong>-</strong>) in front of a word indicates that the word must be present (absent) in the result. A phrase that is enclosed in double quotes (<strong>\\"</strong>) is matched literally. A star (<strong>*</strong>) appended to a word acts as a wildcard (matches all the words starting with that word). For more details see this: <a href=\\"http://dev.mysql.com/doc/refman/5.7/en/fulltext-boolean.html\\" target=\\"_blank\\">MySQL Boolean Full-Text Searches</a>.</li>\\r\\n</ul>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Search types are: <strong>Similar</strong> and <strong>Logical</strong>.</p>\\n<ul>\\n<li><strong>Similar searches</strong> return results according to the similarity with the search string.</li>\\n<li><strong>Logical searches</strong> can use more advanced logic to select the right results. For example the sign <strong>+</strong> (or <strong>-</strong>) in front of a word indicates that the word must be present (absent) in the result. A phrase that is enclosed in double quotes (<strong>\\"</strong>) is matched literally. A star (<strong>*</strong>) appended to a word acts as a wildcard (matches all the words starting with that word). For more details see this: <a href=\\"http://dev.mysql.com/doc/refman/5.7/en/fulltext-boolean.html\\" target=\\"_blank\\">MySQL Boolean Full-Text Searches</a>.</li>\\n</ul>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'2\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:2:{s:7:"contact";i:1;s:17:"mimemail_textonly";i:0;}\',
      \'disqus\' => array(
        \'domain\' => \'qtranslate\',
        \'url\' => \'https://qtranslate.net/search-types\',
        \'title\' => \'Search Types\',
        \'identifier\' => \'node/8\',
        \'developer\' => 1,
        \'status\' => FALSE,
      ),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'Anonymous\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => 1,
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Search Types\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'0\',
      \'uuid\' => \'789a08c6-f845-42b1-b5f6-f1c38e9a7310\',
      \'vid\' => NULL,
      \'vuuid\' => \'b7c6eac5-9eeb-4200-8a34-41b67b0e964c\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>The services of this application will be used in good faith. Any disputes will be solved with agreement and mutual understanding.</p>\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>The services of this application will be used in good faith. Any disputes will be solved with agreement and mutual understanding.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'disqus\' => array(
        \'domain\' => \'qtranslate\',
        \'url\' => \'https://qtranslate.net/terms\',
        \'title\' => \'Terms of Service\',
        \'identifier\' => \'node/6\',
        \'developer\' => 1,
        \'status\' => FALSE,
      ),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'0\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'Anonymous\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => 1,
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Terms of Service\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'0\',
      \'uuid\' => \'833cb21a-27b8-4757-a8fe-eaa68d86b901\',
      \'vid\' => NULL,
      \'vuuid\' => \'60df27dc-1b3a-8eb4-5512-ff65210dbf9b\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Anyone can export translations from the dashboard of a language. By default the most liked translations are exported, however it is possible to export only the translations that you like. Alternatively, you can choose to export only the translations that are endorsed/supported/liked by people that you trust. The exported file contains each translated verse on a separate line, preceded by the chapter and verse numbers.</p>\\r\\n\\r\\n<p>Translators and admins can also import translations. The format of the import file is the same as that of the exported file: each translated verse on a single line, preceded by the chapter and verse numbers. If a translation does not exist, it will be added with author the user that made the import; if it already exists, only a like from that user will be added. Admins can also import translations on behalf of another user.</p>\\r\\n\\r\\n<p>The site administrator can also import all the translations of a language from the terminal. For example to import the German translations:\\r\\n<pre>/var/www/data/import.sh de</pre>\\r\\n</p>",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p>Anyone can export translations from the dashboard of a language. By default the most liked translations are exported, however it is possible to export only the translations that you like. Alternatively, you can choose to export only the translations that are endorsed/supported/liked by people that you trust. The exported file contains each translated verse on a separate line, preceded by the chapter and verse numbers.</p>\\n<p>Translators and admins can also import translations. The format of the import file is the same as that of the exported file: each translated verse on a single line, preceded by the chapter and verse numbers. If a translation does not exist, it will be added with author the user that made the import; if it already exists, only a like from that user will be added. Admins can also import translations on behalf of another user.</p>\\n<p>The site administrator can also import all the translations of a language from the terminal. For example to import the German translations:</p>\\n<pre>/var/www/data/import.sh de</pre></p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'disqus\' => array(
        \'domain\' => \'qtranslate\',
        \'url\' => \'https://qtranslate.net/exporting-and-importing-translations\',
        \'title\' => \'Exporting and Importing Translations\',
        \'identifier\' => \'node/7\',
        \'developer\' => 1,
        \'status\' => FALSE,
      ),
      \'field_image\' => array(),
      \'field_tags\' => array(),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'0\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'Anonymous\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'1\',
      \'rdf_mapping\' => array(
        \'field_image\' => array(
          \'predicates\' => array(
            \'og:image\',
            \'rdfs:seeAlso\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_tags\' => array(
          \'predicates\' => array(
            \'dc:subject\',
          ),
          \'type\' => \'rel\',
        ),
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => 1,
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Exporting and Importing Translations\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'article\',
      \'uid\' => \'0\',
      \'uuid\' => \'c859de0f-e93b-4e26-a53b-f67379e26ae6\',
      \'vid\' => NULL,
      \'vuuid\' => \'0fb496b0-03a5-4bf2-a82f-39a943dac77d\',
    ),
)',
);
  return $node_export;
}
