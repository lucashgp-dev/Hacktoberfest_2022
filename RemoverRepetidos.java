List<TableDTO> emitentesUnicos = dados.stream()

                .collect(Collectors.collectingAndThen(

                        Collectors.toMap(c -> Arrays.asList(c.getNrdocemit(), c.getNrdocemit()),

                                Function.identity(), (a, b) -> a, LinkedHashMap::new),

                        m -> new ArrayList<>(m.values())));

        

        Integer qt_emitente = emitentesUnicos.size();

